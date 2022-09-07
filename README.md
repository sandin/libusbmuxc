# libusbmuxc

A client library to communicating with iOS devices using the [usbmux](https://www.theiphonewiki.com/wiki/Usbmux) protocol.

Inspired by [libusbmuxd](https://github.com/libimobiledevice/libusbmuxd) and rewritten in modern C++.
​           


## Build

1. Compile the [libplist](https://github.com/libimobiledevice/libplist) project first, and then set its pkgconfig output directory to the `IMB_PKG_CONFIG_PATH` environment variable.

e.g.:
```bash
$ export IMB_PKG_CONFIG_PATH="../libimobiledevice/built/darwin-arm64/lib/pkgconfig"
```

2. Compile with CMake.

```bash
$ mkdir build && cd build
$ cmake ..
// or cmake -G "Xcode" ..
```