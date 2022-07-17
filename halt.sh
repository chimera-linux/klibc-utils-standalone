#!/bin/sh

install -d "${DESTDIR}/${MESON_INSTALL_PREFIX}/${1}"
ln -sf halt "${DESTDIR}/${MESON_INSTALL_PREFIX}/${1}/poweroff"
ln -sf halt "${DESTDIR}/${MESON_INSTALL_PREFIX}/${1}/reboot"
