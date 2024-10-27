import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 240
    height: 320
    title: "État Système"

    Column {
        spacing: 10
        padding: 10

        Text { text: "État du Système"; font.pixelSize: 16; font.bold: true }

        ListView {
            width: parent.width
            height: 160
            model: ListModel {
                ListElement { module: "WiFi"; statut: "Actif" }
                ListElement { module: "Bluetooth"; statut: "Inactif" }
            }
            delegate: Row {
                Text { text: module + ": " + statut }
            }
        }
    }
}
