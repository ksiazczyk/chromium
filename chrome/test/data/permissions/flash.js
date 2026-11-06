// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Flash test helper script
// summary: JavaScript helper for the Flash test pages that triggers prompts, checks plugin power saver status, and reports results via domAutomationController.
// ---

var FLASH_DOWNLOAD_URL = 'https://get.adobe.com/flashplayer/';

function triggerPrompt() {
  document.getElementById('flash-link').click();
  window.domAutomationController.send(true);
}

function triggerPromptViaNewWindow() {
  document.getElementById('flash-new-window-link').click();
  window.domAutomationController.send(true);
}

function triggerPromptWithMainFrameNavigation() {
  window.location.href = FLASH_DOWNLOAD_URL;
}

function flashIsEnabledForPlugin(plugin) {
  plugin.addEventListener('message', function handleEvent(event) {
   if (event.data.source === 'getPowerSaverStatusResponse') {
      plugin.removeEventListener('message', handleEvent);
      window.domAutomationController.send(true);
    }
  });
  if (plugin.postMessage)
    plugin.postMessage('getPowerSaverStatus');
  else
    window.domAutomationController.send(false);
}

function flashIsEnabled() {
  flashIsEnabledForPlugin(document.getElementById('flash-object'));
}

function flashIsEnabledForPluginWithoutFallback() {
  flashIsEnabledForPlugin(
      document.getElementById('flash-object-no-fallback'));
}

function spawnPopupAndAwaitLoad() {
  var popup = window.open(window.location.href);
  popup.addEventListener('load', function handleLoad() {
    popup.removeEventListener('load', handleLoad);
    window.domAutomationController.send(true);
  });
}
