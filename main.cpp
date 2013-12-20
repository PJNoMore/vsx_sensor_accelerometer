#include <QtGui/QGuiApplication>
#include <QtQml>

#include "qtquick2applicationviewer.h"
#include "vsxuaccelerometer.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    // It is a good Idea to use a URI naming scheme to specify the module package name
    qmlRegisterType<VSXuAccelerometer>("org.vovoid.vsxu", 1, 0, "VSXuAccelerometer");

    QtQuick2ApplicationViewer viewer;
    viewer.setMainQmlFile(QStringLiteral("qml/VSXuDroid/main.qml"));
    viewer.showExpanded();

    return app.exec();
}
