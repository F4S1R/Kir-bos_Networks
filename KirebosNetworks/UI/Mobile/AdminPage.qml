import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 360
    height: 640
    title: "Administration"

    Column {
        anchors.centerIn: parent
        spacing: 15
        padding: 20

        Text {
            text: "Administration"
            font.pixelSize: 24
            font.bold: true
        }

        Text {
            text: "Chiffrement : AES-256"
            font.pixelSize: 16
            font.bold: false
        }

        Button {
            text: "Activer 2FA"
            width: parent.width * 0.6
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Text {
            text: "Surveillance des connexions"
            font.pixelSize: 16
            font.bold: true
        }

        Text {
            text: "Dernière alerte : Aucune"
            font.pixelSize: 14
        }

        Button {
            text: "Voir les logs"
            width: parent.width * 0.5
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }
}
