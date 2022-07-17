# klibc-utils-standalone

These are some of the tools that come with the `klibc` project (available
at https://git.kernel.org/pub/scm/libs/klibc/klibc.git) that are meant to
provide simplified versions of several `util-linux` tools. It explicitly
does not provide anything normally provided by `coreutils`, `bsdutils` and
the likes.

In Chimera, this is to be used together with `bsdutils`, which already
provides a reasonably small core userland, but not these.

The `klibc` project itself is provided under the terms of the MIT license.

## Building

This fork uses `meson`. Therefore, you will need that installed. You will
also need the Linux kernel headers installed.

Quick instructions:

```
$ mkdir build
$ cd build
$ meson .. --prefix=/usr
$ ninja all
$ ninja install
```
