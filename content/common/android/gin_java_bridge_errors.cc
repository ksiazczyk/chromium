// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Gin Java bridge error message conversion
// summary: Maps GinJavaBridgeError enum values from the Java bridge mojo interface to human-readable error strings for reporting Java bridge failures.
// ---

#include "content/common/android/gin_java_bridge_errors.h"

#include "base/notreached.h"

namespace content {

const char* GinJavaBridgeErrorToString(mojom::GinJavaBridgeError error) {
  switch (error) {
    case mojom::GinJavaBridgeError::kGinJavaBridgeNoError:
      return "No error";
    case mojom::GinJavaBridgeError::kGinJavaBridgeUnknownObjectId:
      return "Unknown Java object ID";
    case mojom::GinJavaBridgeError::kGinJavaBridgeObjectIsGone:
      return "Java object is gone";
    case mojom::GinJavaBridgeError::kGinJavaBridgeMethodNotFound:
      return "Method not found";
    case mojom::GinJavaBridgeError::
        kGinJavaBridgeAccessToObjectGetClassIsBlocked:
      return "Access to java.lang.Object.getClass is blocked";
    case mojom::GinJavaBridgeError::kGinJavaBridgeJavaExceptionRaised:
      return "Java exception was raised during method invocation";
    case mojom::GinJavaBridgeError::kGinJavaBridgeNonAssignableTypes:
      return "The type of the object passed to the method is incompatible "
          "with the type of method's argument";
    case mojom::GinJavaBridgeError::kGinJavaBridgeRenderFrameDeleted:
      return "RenderFrame has been deleted";
  }
  NOTREACHED();
}

}  // namespace content
