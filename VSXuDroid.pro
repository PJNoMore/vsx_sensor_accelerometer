# Add more folders to ship with the application, here
folder_01.source = qml/VSXuDroid
folder_01.target = qml
DEPLOYMENTFOLDERS = folder_01

# Additional import path used to resolve QML modules in Creator's code model
QML_IMPORT_PATH =

QT += sensors

# Installation path
# target.path =

# Please do not modify the following two lines. Required for deployment.
include(qtquick2applicationviewer/qtquick2applicationviewer.pri)
qtcAddDeployment()

HEADERS += \
    vsxuaccelerometer.h

SOURCES += \
    main.cpp \
    vsxuaccelerometer.cpp


