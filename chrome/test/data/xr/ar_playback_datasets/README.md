---
type: readme
title: AR Playback Datasets
summary: Explains that the directory holds recorded ARCore playback datasets containing video and sensor data, used by automated AR tests to exercise features such as hit testing.
---

# AR Playback Datasets

The .mp4 files in this directory are recorded AR datasets for use with ARCore's
playback functionality. In additional to video data, they contain recorded
sensor data, allowing ARCore to play back a recorded AR session as if the
device was actually moving and collecting camera data. This allows the automated
AR tests to test features that require actual data, such as hit testing.
