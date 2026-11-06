---
type: readme
title: Cast base
summary: Explains the cast_features system for checking feature state in Cast products and how to add new features to cast_features.cc.
relations:
  - documents /chromecast/base/cast_features.cc
---

# Cast base

## cast_features

This file contains tools for checking the feature state of all of the features
which affect Cast products. Cast features build upon
[the Chrome feature system](https://chromium.googlesource.com/chromium/src/+/main/base/feature_list.h).
Some aspects of Cast require the feature system to work differently, however,
so some additional logic has been layered on top. Details are available in
comments of the header file. The basics are:

 * If you are adding a new feature, add it to `cast_features.cc` so it lives
 alongside existing features
 * Add your new feature to the list of `kFeatures` in `cast_features.cc`

```c++
BASE_FEATURE(kMyFeature, "my_feature", base::FEATURE_DISABLED_BY_DEFAULT);


const base::Feature* kFeatures[] = {
  // ..other features
  &kMyFeature
}
```
