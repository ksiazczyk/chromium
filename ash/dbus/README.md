---
type: readme
title: Ash DBus services overview
summary: Explains how the D-Bus bus instance and ash D-Bus services are owned under classic single-process mash and multi-process ash builds.
relations:
  - references /ash/README.md
---

Under classic/single-process mash:
* The dbus::Bus instance is created in chrome and passed to ash in
  ShellInitParams.
* Access to D-Bus clients is restricted to clients that will eventually be owned
  by the ash process.

Under multi-process ash (mash):
* AshDBusHelper creates its own dbus thread and dbus::Bus instance.
* The D-Bus clients created in AshService are owned by the ash process.
* The D-Bus services in AshDBusServices are owned by the ash process.

See `//ash/README.md` for details on mash.
See [Chrome OS D-Bus Usage in Chrome] for information about adding D-Bus
services.

[Chrome OS D-Bus Usage in Chrome]: https://chromium.googlesource.com/chromiumos/docs/+/HEAD/dbus_in_chrome.md
