// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: RTP dump type enum
// summary: 'Defines an enum listing the RTP header dump types: incoming packets only, outgoing packets only, or both.'
// ---

#ifndef CHROME_BROWSER_MEDIA_WEBRTC_RTP_DUMP_TYPE_H_
#define CHROME_BROWSER_MEDIA_WEBRTC_RTP_DUMP_TYPE_H_

// The types of RTP header dumps: incoming packets only, outgoing packets only,
// and both incoming and outgoing packets.
enum RtpDumpType { RTP_DUMP_INCOMING, RTP_DUMP_OUTGOING, RTP_DUMP_BOTH };

#endif  // CHROME_BROWSER_MEDIA_WEBRTC_RTP_DUMP_TYPE_H_
