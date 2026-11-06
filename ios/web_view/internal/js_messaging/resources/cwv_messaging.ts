// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CWV messaging JavaScript API
// summary: TypeScript module that registers the cwvMessaging API, exposing a messageHost function that sends command payloads to the iOS WebView host via the CWVWebViewMessage WebKit message handler.
// ---

import {CrWebApi, gCrWeb} from '//ios/web/public/js_messaging/resources/gcrweb.js';
import {sendWebKitMessage} from '//ios/web/public/js_messaging/resources/utils.js';

function messageHost(messageName: string, payload: Object): void {
  const message = {'command': messageName, 'payload': payload};
  sendWebKitMessage('CWVWebViewMessage', message);
}

const cwvMessagingApi = new CrWebApi('cwvMessaging');
cwvMessagingApi.addFunction('messageHost', messageHost);
gCrWeb.registerApi(cwvMessagingApi);
