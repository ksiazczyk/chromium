---
type: readme
title: ov_name_constraints test data README
summary: Describes the directory supporting //components/certificate_transparency, holding test data for policies on disabling Certificate Transparency for OV-constrained certificates.
---

This directory contains files to support //components/certificate_transparency,
particularly those policies and preferences related to disabling Certificate
Transparency support for OV-constrained certificates.

It exists in //net/data due to its close coupling to the certificate generation
scripts and the existing net_unittests_bundle_data used extensively for
certificate tests.
