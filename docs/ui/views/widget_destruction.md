---
type: reference
title: Views Widget Destruction
summary: Describes widget destruction sequences for desktop native widget, native widget, and MacViews under both ownership models, illustrated with diagrams.
relations:
  - references /docs/ui/views/images/widget_destruction_NWOW_MacViews.png
  - references /docs/ui/views/images/widget_destruction_NWOW_desktop.png
  - references /docs/ui/views/images/widget_destruction_NWOW_non_desktop.png
---

This document describes the destruction procedure of Widget related classes.

## Desktop Native Widget
### NativeWidgetOwnsWidget
![NativeWidgetOwnsWidget - DesktopNativeWidget](images/widget_destruction_NWOW_desktop.png)

### WidgetOwnsNativeWidget
![WidgetOwnsNativeWidget - DesktopNativeWidget](images/widget_destruction_WONW_desktop.png)

## Native Widget
### NativeWidgetOwnsWidget
![NativeWidgetOwnsWidget - NativeWidget](images/widget_destruction_NWOW_non_desktop.png)

### WidgetOwnsNativeWidget
![WidgetOwnsNativeWidget - NativeWidget](images/widget_destruction_WONW_non_desktop.png)

## MacViews
### NativeWidgetOwnsWidget
![NativeWidgetOwnsWidget - MacViews](images/widget_destruction_NWOW_MacViews.png)

### WidgetOwnsNativeWidget
![WidgetOwnsNativeWidget - MacViews](images/widget_destruction_WONW_MacViews.png)
