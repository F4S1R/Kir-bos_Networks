import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 240
    height: 320
    title: "Kirebos Networks"

    Column {
        spacing: 10
        padding: 10

        Text { text: "Kirebos Networks"; font.pixelSize: 16; font.bold: true; }

        Text { text: "Connexion Réseau"; font.pixelSize: 14; }
        ListView {
            width: parent.width
            height: 100
            model: ListModel {
                ListElement { name: "WiFi"; status: "Connecté" }
                ListElement { name: "GSM"; status: "Déconnecté" }
            }
            delegate: Item {
                width: parent.width
                Row {
                    Text { text: name }
                    Text { text: status }
                }
            }
        }

        Button { text: "Rafraîchir"; width: parent.width * 0.8 }
        Button { text: "Options"; width: parent.width * 0.8 }
    }
}
