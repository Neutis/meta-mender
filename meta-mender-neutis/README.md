# meta-mender-neutis

This Yocto layers contain recipes which enable support of building Mender client for Emlid Neutis N5.

## Dependencies

Yocto release - Sumo.

This layer depends on:
```
https://github.com/Neutis/meta-emlid-neutis.git
branch: sumo
revision: HEAD
```

## Build instructions

- Read [the Mender documentation on Building a Mender Yocto image](https://docs.mender.io/Artifacts/Building-Mender-Yocto-image) for Mender specific configuration.
- Update your local.conf
```
DISTRO = "poky-neutis-mender"
```
- Add following to `meta-emlid-neutis/meta-neutis-distro/recipes-core/images/neutis-image.bbappend`
```
require recipes-core/images/neutis-mender-image.inc
```

- Run `bitbake <image name>`
