import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 800
    height: 1200
    title: "Administration"

    Column {
        anchors.centerIn: parent
        spacing: 20
        padding: 20

        Text {
            text: "Administration"
            font.pixelSize: 32
            font.bold: true
        }

        Text {
            text: "Chiffrement : AES-256"
            font.pixelSize: 18
        }

        Button {
            text: "Activer 2FA"
            width: parent.width * 0.4
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Text {
            text: "Dernière alerte : Aucune"
            font.pixelSize: 18
        }

        Button {
            text: "Voir les logs"
            width: parent.width * 0.4
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }
}
