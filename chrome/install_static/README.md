---
type: readme
title: Install Static Library overview
summary: Explains that install_static provides minimal Windows installation property detection and utility functions with only kernel32 and version dependencies, making it suitable for chrome_elf.
relations:
  - references /chrome/install_static/install_modes.h
  - references /chrome/install_static/install_constants.h
  - references /chrome/install_static/install_details.h
---

# Install Static Library

The install_static library for Windows contains the minimum functionality to
determine the fundamental properties of Chrome's installation plus various
installation-related utility functions. It has no dependencies beyond
kernel32.dll and version.dll, thereby making it suitable for use within
chrome_elf.

Key concepts for the library are documented in
[install_modes.h](./install_modes.h),
[install_constants.h](./install_constants.h), and
[install_details.h](./install_details.h).
