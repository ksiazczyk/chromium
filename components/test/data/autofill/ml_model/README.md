---
type: readme
title: Autofill ML model test data README
summary: Explains how to generate autofill_model_metadata.binarypb from the textproto using a gqui command against the autofill field classification model metadata proto.
relations:
  - documents /components/test/data/autofill/ml_model/autofill_model_metadata.binarypb
  - references /components/test/data/autofill/ml_model/autofill_model_metadata.textproto
  - references /components/optimization_guide/proto/autofill_field_classification_model_metadata.proto
---

Generate the autofill_model_metadata.binarypb via
`gqui from textproto:./autofill_model_metadata.textproto proto ../../../../optimization_guide/proto/autofill_field_classification_model_metadata.proto:optimization_guide.proto.AutofillFieldClassificationModelMetadata --outfile=rawproto:autofill_model_metadata.binarypb`
