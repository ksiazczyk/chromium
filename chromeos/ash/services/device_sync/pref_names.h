// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CryptAuth preference name declarations
// summary: Declares the preference key names used to persist CryptAuth enrollment, device sync and scheduler state.
// ---

#ifndef CHROMEOS_ASH_SERVICES_DEVICE_SYNC_PREF_NAMES_H_
#define CHROMEOS_ASH_SERVICES_DEVICE_SYNC_PREF_NAMES_H_

namespace ash {

namespace device_sync {

namespace prefs {

// Prefs for CryptAuth v1 and v2:
extern const char kCryptAuthGCMRegistrationId[];

// Prefs for CryptAuth v2:
extern const char kCryptAuthDeviceRegistry[];
extern const char kCryptAuthKeyRegistry[];
extern const char kCryptAuthLastEnrolledClientAppMetadataHash[];
extern const char kCryptAuthLastSyncedEncryptedLocalDeviceMetadata[];
extern const char kCryptAuthLastSyncedGroupPublicKey[];
extern const char kCryptAuthLastSyncedUnencryptedLocalDeviceMetadata[];
extern const char kCryptAuthBluetoothAddressProvidedDuringLastSync[];
extern const char kCryptAuthAttestationCertificatesLastGeneratedTimestamp[];
extern const char kCryptAuthSchedulerClientDirective[];
extern const char kCryptAuthSchedulerNextEnrollmentRequestClientMetadata[];
extern const char kCryptAuthSchedulerNextDeviceSyncRequestClientMetadata[];
extern const char kCryptAuthSchedulerLastEnrollmentAttemptTime[];
extern const char kCryptAuthSchedulerLastDeviceSyncAttemptTime[];
extern const char kCryptAuthSchedulerLastSuccessfulEnrollmentTime[];
extern const char kCryptAuthSchedulerLastSuccessfulDeviceSyncTime[];

}  // namespace prefs

}  // namespace device_sync

}  // namespace ash

#endif  // CHROMEOS_ASH_SERVICES_DEVICE_SYNC_PREF_NAMES_H_
