// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: OmniboxSuggestionsDropdownAdapter
// summary: RecyclerView adapter for the omnibox suggestions dropdown that creates and binds view holders and records view reuse metrics.
// ---

package org.chromium.chrome.browser.omnibox.suggestions;

import android.view.View;
import android.view.ViewGroup;

import androidx.annotation.VisibleForTesting;

import org.chromium.build.annotations.NullMarked;
import org.chromium.chrome.browser.omnibox.OmniboxMetrics;
import org.chromium.ui.modelutil.SimpleRecyclerViewAdapter;

/** ModelListAdapter for OmniboxSuggestionsDropdown (RecyclerView version). */
@VisibleForTesting(otherwise = VisibleForTesting.PACKAGE_PRIVATE)
@NullMarked
public class OmniboxSuggestionsDropdownAdapter extends SimpleRecyclerViewAdapter {
    private final OmniboxViewHolderFactory mViewHolderFactory;
    private int mNumSessionViewsCreated;
    private int mNumSessionViewsBound;

    OmniboxSuggestionsDropdownAdapter(ModelList data, OmniboxViewHolderFactory factory) {
        super(data);
        mViewHolderFactory = factory;
    }

    /* package */ void recordSessionMetrics() {
        if (mNumSessionViewsBound > 0) {
            OmniboxMetrics.recordSuggestionViewReuseStats(
                    mNumSessionViewsCreated,
                    100
                            * (mNumSessionViewsBound - mNumSessionViewsCreated)
                            / mNumSessionViewsBound);
        }
        mNumSessionViewsCreated = 0;
        mNumSessionViewsBound = 0;
    }

    @Override
    public void onViewRecycled(ViewHolder holder) {
        super.onViewRecycled(holder);
        holder.itemView.setSelected(/* selected= */ false);
    }

    @Override
    @VisibleForTesting
    protected View createView(ViewGroup parent, int viewType) {
        return mViewHolderFactory.createView(parent, viewType);
    }

    @Override
    public ViewHolder onCreateViewHolder(ViewGroup parent, int viewType) {
        mNumSessionViewsCreated++;
        return mViewHolderFactory.createViewHolderForAdapter(parent, viewType);
    }

    @Override
    public void onBindViewHolder(ViewHolder holder, int position) {
        mNumSessionViewsBound++;
        super.onBindViewHolder(holder, position);
    }
}
