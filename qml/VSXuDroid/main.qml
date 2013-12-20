import QtQuick 2.0
import VSXuAccelerometer 1.0

Rectangle {
    width: 360
    height: 360
    objectName: "accrect"
    Text {
        objectName: "accreadinglabel"
        text: qsTr("x: y: z:")
        anchors.centerIn: parent

        VSXuAccelerometer {

        }
    }
}
