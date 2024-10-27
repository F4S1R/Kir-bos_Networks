import QtQuick 2.15
import QtQuick.Controls 2.15

Popup {
    width: 240
    height: 180
    modal: true

    Column {
        spacing: 5
        padding: 10
        anchors.centerIn: parent

        Image {
            source: "Assets/logo.png"
            width: 60
            height: 60
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Text {
            text: "Désinstallation..."
            font.pixelSize: 12
            font.bold: true
            horizontalAlignment: Text.AlignHCenter
        }

        ProgressBar {
            width: parent.width * 0.8
            indeterminate: true
        }

        ListView {
            width: parent.width * 0.8
            height: 40
            model: ListModel {
                ListElement { item: "Suppression des données..." }
                ListElement { item: "Désinstallation module..." }
                ListElement { item: "Nettoyage fichiers..." }
            }
            delegate: Text { text: item }
        }
    }
}
