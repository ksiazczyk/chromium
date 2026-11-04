// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Sign-in promo preference
// summary: Preference that displays a sign-in promo card in the Autofill and Passwords settings via the sign-in promo coordinator.
// ---

package org.chromium.chrome.browser.autofill.settings;

import android.content.Context;
import android.util.AttributeSet;

import androidx.preference.Preference;
import androidx.preference.PreferenceViewHolder;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;
import org.chromium.chrome.R;
import org.chromium.chrome.browser.ui.signin.signin_promo.SigninPromoCoordinator;

/** A preference that displays a sign-in promo card for Autofill and Passwords settings. */
@NullMarked
public class SigninPromoPreference extends Preference {
    private @Nullable SigninPromoCoordinator mCoordinator;

    /** Constructor for inflating from XML. */
    public SigninPromoPreference(Context context, @Nullable AttributeSet attrs) {
        super(context, attrs);
        setSelectable(false);
    }

    /** Sets the coordinator for the sign-in promo. */
    void setCoordinator(SigninPromoCoordinator coordinator) {
        mCoordinator = coordinator;
        setLayoutResource(R.layout.sync_promo_view_autofill_and_passwords);
        notifyChanged();
    }

    @Override
    public void onBindViewHolder(PreferenceViewHolder holder) {
        super.onBindViewHolder(holder);
        if (mCoordinator != null) {
            holder.itemView.setId(R.id.signin_promo_view_container);
            mCoordinator.setView(holder.itemView);
        }
    }
}
