QT.core_private.VERSION = 5.9.7
QT.core_private.name = QtCore
QT.core_private.module =
QT.core_private.libs = $$QT_MODULE_LIB_BASE
QT.core_private.includes = $$QT_MODULE_INCLUDE_BASE/QtCore/5.9.7 $$QT_MODULE_INCLUDE_BASE/QtCore/5.9.7/QtCore
QT.core_private.frameworks =
QT.core_private.depends = core
QT.core_private.uses =
QT.core_private.module_config = v2 internal_module
QT.core_private.enabled_features = clock-gettime datetimeparser dlopen doubleconversion glib posix-libiconv icu inotify poll_ppoll sha3-fast
QT.core_private.disabled_features = gnu-libiconv iconv journald poll_poll poll_pollts poll_select slog2 syslog system-doubleconversion system-pcre2
QMAKE_LIBS_LIBRT = -lrt
QMAKE_LIBS_LIBDL = -ldl
QMAKE_LIBS_GLIB = -L/home/diot/anaconda3/lib -lgthread-2.0 -lrt -lglib-2.0
QMAKE_INCDIR_GLIB = /home/diot/anaconda3/include/glib-2.0 /home/diot/anaconda3/lib/glib-2.0/include /home/diot/anaconda3/include
QMAKE_LIBS_ICU = -licui18n -licuuc -licudata
QMAKE_LIBS_LIBATOMIC = 
