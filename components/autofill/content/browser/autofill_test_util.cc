// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Autofill test form data utilities
// summary: Provides a test helper that creates a FormData bound to a given RenderFrameHost, assigning host frames and renderer IDs.
// ---

#include "components/autofill/content/browser/autofill_test_util.h"

#include <utility>
#include <vector>

#include "components/autofill/core/common/autofill_test_util.h"
#include "components/autofill/core/common/form_data.h"
#include "components/autofill/core/common/form_field_data.h"
#include "components/autofill/core/common/unique_ids.h"
#include "content/public/browser/render_frame_host.h"

namespace autofill::test {

FormData CreateFormDataForRenderFrameHost(content::RenderFrameHost& rfh,
                                          std::vector<FormFieldData> fields) {
  FormData form;
  form.set_url(rfh.GetLastCommittedURL());
  form.set_action(form.url());
  form.set_host_frame(LocalFrameToken(rfh.GetFrameToken().value()));
  form.set_renderer_id(MakeFormRendererId());
  for (FormFieldData& field : fields) {
    field.set_host_frame(form.host_frame());
    if (!field.renderer_id()) {
      field.set_renderer_id(MakeFieldRendererId());
    }
  }
  form.set_fields(std::move(fields));
  return form;
}

}  // namespace autofill::test
