import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 360
    height: 640
    title: "Installation"

    Column {
        anchors.centerIn: parent
        spacing: 20
        padding: 20

        Image {
            source: "Assets/logo.png"
            width: 150
            height: 150
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Text {
            text: "Installation en cours..."
            font.pixelSize: 16
            font.bold: true
            horizontalAlignment: Text.AlignHCenter
        }

        ProgressBar {
            width: parent.width * 0.8
            indeterminate: true
        }

        Text {
            text: "Veuillez patienter, le logiciel s'installe..."
            font.pixelSize: 12
            horizontalAlignment: Text.AlignHCenter
        }
    }
}
