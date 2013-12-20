import QtQuick 2.0
import org.vovoid.vsxu 1.0

Rectangle {
    width: 360
    height: 360
    objectName: "accrect"
    Text {
        objectName: "accreadinglabel"
        text: accelerometerBackend.moduleName + accelerometerBackend.readingString
        anchors.centerIn: parent

        VSXuAccelerometer {
            id: accelerometerBackend

        }
    }
}
