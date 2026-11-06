// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: UtilReadIcon class declaration
// summary: Declares the UtilReadIcon Mojo service that reads icons from files on behalf of the browser process.
// ---

#ifndef CHROME_SERVICES_UTIL_WIN_UTIL_READ_ICON_H_
#define CHROME_SERVICES_UTIL_WIN_UTIL_READ_ICON_H_

#include "chrome/services/util_win/public/mojom/util_read_icon.mojom.h"
#include "mojo/public/cpp/bindings/pending_receiver.h"
#include "mojo/public/cpp/bindings/receiver.h"

class UtilReadIcon : public chrome::mojom::UtilReadIcon {
 public:
  explicit UtilReadIcon(
      mojo::PendingReceiver<chrome::mojom::UtilReadIcon> receiver);

  UtilReadIcon(const UtilReadIcon&) = delete;
  UtilReadIcon& operator=(const UtilReadIcon&) = delete;

  ~UtilReadIcon() override;

 private:
  // chrome::mojom::UtilReadIcon:
  void ReadIcon(base::File file,
                chrome::mojom::IconSize icon_size,
                float scale,
                ReadIconCallback callback) override;

  mojo::Receiver<chrome::mojom::UtilReadIcon> receiver_;

  base::WeakPtrFactory<UtilReadIcon> weak_ptr_factory_{this};
};

#endif  // CHROME_SERVICES_UTIL_WIN_UTIL_READ_ICON_H_
