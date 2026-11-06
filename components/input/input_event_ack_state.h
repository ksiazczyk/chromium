// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Declaration of input event ack state string conversion
// summary: Declares InputEventResultStateToString, which converts input event ack result states into string form.
// ---

#ifndef COMPONENTS_INPUT_INPUT_EVENT_ACK_STATE_H_
#define COMPONENTS_INPUT_INPUT_EVENT_ACK_STATE_H_

namespace input {

const char* InputEventResultStateToString(
    blink::mojom::InputEventResultState ack_state);

}  // namespace input

#endif  // COMPONENTS_INPUT_INPUT_EVENT_ACK_STATE_H_
