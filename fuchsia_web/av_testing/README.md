---
type: readme
title: AV testing README
summary: Explains how to run the tests locally, including hosting video files with a local HTTP server and format limitations without src-internal.
---

## How to run the tests locally

When running locally, a local http server is needed to host the video files to
avoid the accessibility issue. A simple solution is to get a random vp8 file,
rename it to video.webm, place it here. Note, if the build does not have
src-internal, it won't support video formats like h264.
