---
type: readme
title: Quick Insert Views
summary: Documents the Quick Insert UI view hierarchy, from the widget and main view down to the search field.
---

# Quick Insert Views

## Hierarchy

* `QuickInsertView::CreateWidget`: Creates the Widget used to hold the Quick Insert window.
  * `QuickInsertView`: The main Views window containing all the UI.
    * `QuickInsertSearchFieldView`: A full-width search field for Quick Insert.
