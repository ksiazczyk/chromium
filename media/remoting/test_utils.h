// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Header for ReceiverController test helpers
// summary: Declares the ResetForTesting friend function used to reset ReceiverController's mojo bindings during tests.
// ---

#ifndef MEDIA_REMOTING_TEST_UTILS_H_
#define MEDIA_REMOTING_TEST_UTILS_H_

namespace media {
namespace remoting {

class ReceiverController;

// Friend function for resetting the mojo binding in ReceiverController.
void ResetForTesting(ReceiverController* controller);

}  // namespace remoting
}  // namespace media

#endif  // MEDIA_REMOTING_TEST_UTILS_H_
