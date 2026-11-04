---
type: readme
title: Omnibox views overview
summary: Explains the two omnibox popup implementations (views and WebUI) and the cutout that lets the omnibox textfield peek through.
---

The current implementation of the views omnibox is complex.

When a user types in the omnibox, a popup is shown. There are two
implementations of the popup: a webui version adapted from the realbox popup and
a views version. Currently the views version is live.

A hole is cut in the popup to allow the original textbox of the omnibox to peek
through. Historically, the popup was just a rectanglular view placed below the
textfield. The hole exists because in the 10th birthday UI refresh the design
changed to surround the text field rather than just appearing below it.
