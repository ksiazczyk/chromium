// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Composebox file inputs element
// summary: Lit element offering file and image upload pickers for the composebox, applying configured file type restrictions and firing file-change events.
// ---

import {loadTimeData} from '//resources/js/load_time_data.js';
import {CrLitElement} from '//resources/lit/v3_0/lit.rollup.js';

import {getHtml} from './composebox_file_inputs.html.js';

export class ComposeboxFileInputsElement extends CrLitElement {
  static get is() {
    return 'cr-composebox-file-inputs';
  }

  override render() {
    return getHtml.bind(this)();
  }

  static override get properties() {
    return {
      disableFileInputs: {type: Boolean},
      attachmentFileTypes_: {type: String},
      imageFileTypes_: {type: String},
    };
  }

  accessor disableFileInputs: boolean = false;
  // Comma separated list of file types.
  protected accessor attachmentFileTypes_: string =
      loadTimeData.getBoolean('lensSendRawFileMediaTypesEnabled') ?
      '*/*' :
      loadTimeData.getString('composeboxAttachmentFileTypes');
  // Comma separated list of file types.
  protected accessor imageFileTypes_: string =
      loadTimeData.getString('composeboxImageFileTypes');

  protected onOpenFileUpload_() {
    this.openFilePicker();
  }

  protected onOpenImageUpload_() {
    this.openImagePicker();
  }

  openFilePicker() {
    if (this.disableFileInputs) {
      return;
    }
    this.shadowRoot?.querySelector<HTMLInputElement>('#fileInput')?.click();
  }

  openImagePicker() {
    if (this.disableFileInputs) {
      return;
    }
    this.shadowRoot?.querySelector<HTMLInputElement>('#imageInput')?.click();
  }

  protected onFileChange_(e: Event) {
    const input = e.target as HTMLInputElement;
    this.fire('file-change', {files: input.files});
    input.value = '';
  }
}

declare global {
  interface HTMLElementTagNameMap {
    'cr-composebox-file-inputs': ComposeboxFileInputsElement;
  }
}

customElements.define(
    ComposeboxFileInputsElement.is, ComposeboxFileInputsElement);
