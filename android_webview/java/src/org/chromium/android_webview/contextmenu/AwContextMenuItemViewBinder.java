// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: View binder for context menu items
// summary: Binds context menu item text and icon properties to the menu row text and image views.
// ---

package org.chromium.android_webview.contextmenu;

import static org.chromium.android_webview.contextmenu.AwContextMenuItemProperties.ICON_DRAWABLE;
import static org.chromium.android_webview.contextmenu.AwContextMenuItemProperties.TEXT;

import android.graphics.drawable.Drawable;
import android.view.View;
import android.widget.ImageView;
import android.widget.TextView;

import org.chromium.android_webview.R;
import org.chromium.build.annotations.NullMarked;
import org.chromium.ui.modelutil.PropertyKey;
import org.chromium.ui.modelutil.PropertyModel;

@NullMarked
class AwContextMenuItemViewBinder {

    public static void bind(PropertyModel model, View view, PropertyKey propertyKey) {
        TextView textView = view.findViewById(R.id.menu_row_text);
        ImageView startIcon = view.findViewById(R.id.menu_row_icon);

        if (propertyKey == TEXT) {
            textView.setText(model.get(TEXT));
        } else if (propertyKey == ICON_DRAWABLE) {
            Drawable icon = model.get(ICON_DRAWABLE);
            if (icon != null && startIcon != null) {
                startIcon.setImageDrawable(icon);
                startIcon.setVisibility(View.VISIBLE);
            }
        }
    }
}
