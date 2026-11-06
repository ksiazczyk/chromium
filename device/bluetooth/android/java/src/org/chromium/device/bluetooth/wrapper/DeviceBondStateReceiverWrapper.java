// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DeviceBondStateReceiverWrapper for bond state broadcasts
// summary: BroadcastReceiver wrapper that listens for Bluetooth bond state changes and notifies a callback with the wrapped device and new bond state.
// ---

package org.chromium.device.bluetooth.wrapper;

import android.bluetooth.BluetoothDevice;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;

import org.chromium.build.annotations.NullMarked;

@NullMarked
public class DeviceBondStateReceiverWrapper extends BroadcastReceiver {
    private final Callback mCallback;

    DeviceBondStateReceiverWrapper(Callback callback) {
        mCallback = callback;
    }

    @Override
    public void onReceive(Context context, Intent intent) {
        if (!BluetoothDevice.ACTION_BOND_STATE_CHANGED.equals(intent.getAction())) {
            return;
        }

        BluetoothDevice device = intent.getParcelableExtra(BluetoothDevice.EXTRA_DEVICE);
        int bondState =
                intent.getIntExtra(BluetoothDevice.EXTRA_BOND_STATE, BluetoothDevice.BOND_NONE);

        mCallback.onDeviceBondStateChanged(new BluetoothDeviceWrapper(device), bondState);
    }

    public interface Callback {
        void onDeviceBondStateChanged(BluetoothDeviceWrapper device, int bondState);
    }
}
