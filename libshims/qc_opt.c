/*
 * Copyright (C) 2026 The LineageOS Project
 *
 * Minimal libqc-opt shim for legacy Qualcomm camera wavelet library
 * (libmmcamera_wavelet_lib.so).
 */

int perf_lock_acq(int handle, int duration, int list[], int numArgs) {
    (void)duration;
    (void)list;
    (void)numArgs;
    return handle ? handle : 1;
}

int perf_lock_rel(int handle) {
    (void)handle;
    return 0;
}
