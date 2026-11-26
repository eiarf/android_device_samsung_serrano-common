/*
 * Copyright (C) 2026 The LineageOS Project
 *
 * Minimal SecNativeFeature shim for legacy Samsung RIL blobs (libsec-ril.so).
 * Provides safe default values when Samsung CSC/FloatingFeature XMLs are absent.
 */

class SecNativeFeature {
public:
    static SecNativeFeature* getInstance();
    bool getEnableStatus(const char* tag);
    const char* getString(const char* tag);
    int getInteger(const char* tag);
};

static SecNativeFeature sInstance;

SecNativeFeature* SecNativeFeature::getInstance() {
    return &sInstance;
}

bool SecNativeFeature::getEnableStatus(const char* /* tag */) {
    return false;
}

const char* SecNativeFeature::getString(const char* /* tag */) {
    return "";
}

int SecNativeFeature::getInteger(const char* /* tag */) {
    return -1;
}
