#include <QtGui/QGuiApplication>
#include "qtquick2applicationviewer.h"
#include <QtSensors/QAccelerometer>
#include <QtDeclarative/QDeclarativeItem>
#include "vsxuaccelerometer.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    qmlRegisterType<VSXuAccelerometer>("VSXuAccelerometer", 1, 0, "VSXuAccelerometer");

    QtQuick2ApplicationViewer viewer;
    viewer.setMainQmlFile(QStringLiteral("qml/VSXuDroid/main.qml"));
    viewer.showExpanded();

    return app.exec();
}
