## TWRP device tree for Galaxy J1 (2016) (Exynos)

Add to `.repo/local_manifests/j1xlte.xml`:

```xml
<?xml version="1.0" encoding="UTF-8"?>
<manifest>
	<project path="device/samsung/j1xlte" name="android_device_samsung_j1xlte" remote="TeamWin" revision="android-6.0" />
</manifest>
```

Then run `repo sync` to check it out.

To build:

```sh
. build/envsetup.sh
lunch omni_j1xlte-eng
make -j5 recoveryimage
```

Kernel sources are available at: https://github.com/jcadduono/android_kernel_samsung_exynos3475/tree/twrp-6.0
