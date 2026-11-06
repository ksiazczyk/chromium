// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: XMPP constants definitions
// summary: Defines constants for XMPP IQ stanza types, XML qualified names used in signaling stanzas, and the maximum allowed stanza size.
// ---

#include "remoting/signaling/xmpp_constants.h"

#include <cstddef>

namespace remoting {

const char kIqTypeSet[] = "set";
const char kIqTypeResult[] = "result";
const char kIqTypeError[] = "error";

const jingle_xmpp::StaticQName kQNameIq = {"jabber:client", "iq"};
const jingle_xmpp::StaticQName kQNameId = {"", "id"};
const jingle_xmpp::StaticQName kQNameType = {"", "type"};
const jingle_xmpp::StaticQName kQNameTo = {"", "to"};
const jingle_xmpp::StaticQName kQNameFrom = {"", "from"};

const std::size_t kMaxStanzaSize = 64 * 1024;

}  // namespace remoting
