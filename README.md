# Common Device Configuration for Samsung Galaxy S4 Mini (`serrano-common`)

This repository contains the common device configuration for Samsung Galaxy S4 Mini variants, ported to **LineageOS 21.0 (Android 14)**.

## Specifications

| Feature | Specification |
| :--- | :--- |
| Chipset | Qualcomm Snapdragon 400 MSM8930 / MSM8930AB |
| CPU | Dual-core 1.7 GHz Krait 200 / 300 |
| GPU | Adreno 305 |
| Memory | 1.5 GB RAM |
| Kernel | Linux 3.4.113 |

---

## 🛠️ Android 14 Porting Highlights & Fixes

* **Android Go Optimization**: Configured with `low_ram=true`, custom heap sizes, and zram swapping to ensure smooth multitasking on 1.5GB RAM.
* **Audio HAL Fixes**: Resolved Treble mixer XML path loading between `/system/etc/mixer_paths.xml` and `/vendor/etc/mixer_paths.xml`.
* **Legacy RIL Compatibility**: Staged VNDK compat libraries (`libcutils-v29.so`, `libnetutils.so`, `libsqlite.so`, `libstdc++.so`) into `/vendor/lib/` to prevent telephony ANRs.
* **Camera HAL Bring-up**: Enabled permissive SELinux and socket paths for `mm-qcamera-daemon` and `camera.vendor.msm8960.so`.

---

## ❤️ Credits & Acknowledgements

* **SherifMoShalaby** - For bringing up Android 14 and Linux kernel 3.4.113 on MSM8930 (Galaxy Mega `melius`), HALv1 shims, and platform patches.
* **Arne Coucheron (@arco68)** - For legendary device maintenance and bringing up Serrano on early CyanogenMod / LineageOS.
* **Silesh Nair (@sileshn)** - For past device maintenance and proprietary vendor sources.
* **LineageOS & LineageOS-UL Team** - For the open-source Android 14 foundation.
* **Google DeepMind / Antigravity Agent** - For AI-assisted debugging, trace analysis, and deep bring-up.
