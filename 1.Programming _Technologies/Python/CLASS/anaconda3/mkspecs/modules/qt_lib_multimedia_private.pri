QT.multimedia_private.VERSION = 5.9.7
QT.multimedia_private.name = QtMultimedia
QT.multimedia_private.module =
QT.multimedia_private.libs = $$QT_MODULE_LIB_BASE
QT.multimedia_private.includes = $$QT_MODULE_INCLUDE_BASE/QtMultimedia/5.9.7 $$QT_MODULE_INCLUDE_BASE/QtMultimedia/5.9.7/QtMultimedia
QT.multimedia_private.frameworks =
QT.multimedia_private.depends = core_private gui_private multimedia
QT.multimedia_private.uses =
QT.multimedia_private.module_config = v2 internal_module
QT.multimedia_private.enabled_features = alsa gstreamer_1_0 gstreamer gstreamer_app gstreamer_encodingprofiles linux_v4l
QT.multimedia_private.disabled_features = directshow directshow-player evr gpu_vivante gstreamer_0_10 gstreamer_photography openal pulseaudio resourcepolicy wasapi wmf wmf-player wmsdk wshellitem
QMAKE_LIBS_ALSA = -lasound
QMAKE_LIBS_GSTREAMER = -L/home/diot/anaconda3/lib -lgstaudio-1.0 -lgstvideo-1.0 -lgstbase-1.0 -lgstpbutils-1.0 -lgstreamer-1.0 -lgobject-2.0 -lglib-2.0
QMAKE_INCDIR_GSTREAMER = /home/diot/anaconda3/include/gstreamer-1.0 /home/diot/anaconda3/include/glib-2.0 /home/diot/anaconda3/lib/glib-2.0/include /home/diot/anaconda3/include
QMAKE_LIBS_GSTREAMER_APP = -L/home/diot/anaconda3/lib -lgstapp-1.0 -lgstbase-1.0 -lgstreamer-1.0 -lgobject-2.0 -lglib-2.0
QMAKE_INCDIR_GSTREAMER_APP = /home/diot/anaconda3/include/gstreamer-1.0 /home/diot/anaconda3/include/glib-2.0 /home/diot/anaconda3/lib/glib-2.0/include /home/diot/anaconda3/include
