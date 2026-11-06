---
type: readme
title: CRX File
summary: Explains that the CRX File component provides compilation units for creating and verifying CRX archive files, with the format described in crx3.proto.
relations:
  - references /components/crx_file/crx3.proto
  - documents /components/crx_file/crx_creator.h
  - documents /components/crx_file/crx_verifier.h
---

# CRX File

The CRX File component is a collection of compilation units related to the
creation or manipulation of CRX archive files.

A CRX file is a ZIP archive with a prepended header section. The CRX file format
is described in more detail in `crx3.proto`.

`crx_creator.h` provides a means to create a CRX file.

`crx_verifier.h` provides a means to verify the integrity of a CRX file.
