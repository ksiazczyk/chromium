// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Messages resource mapper initializer
// summary: JNI initializer that binds Chrome's resource mapper to the messages MessageDispatcherBridge for mapping Java drawable IDs.
// ---

#include "chrome/browser/android/messages/jni_headers/MessagesResourceMapperInitializer_jni.h"
#include "chrome/browser/android/resource_mapper.h"
#include "components/messages/android/message_dispatcher_bridge.h"

// Sets up a callback for MessageDispatcherBridge additional initialization. For
// example, the ResourceMapper from chrome can be bound for use in components.
static void JNI_MessagesResourceMapperInitializer_Init(JNIEnv* env) {
  messages::MessageDispatcherBridge::Get()->Initialize(
      base::BindRepeating(&ResourceMapper::MapToJavaDrawableId));
}

DEFINE_JNI(MessagesResourceMapperInitializer)
