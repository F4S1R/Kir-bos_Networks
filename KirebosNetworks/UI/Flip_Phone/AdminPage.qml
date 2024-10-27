import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 240
    height: 320
    title: "Administration"

    Column {
        spacing: 10
        padding: 10

        Text { text: "Administration"; font.pixelSize: 16; font.bold: true; }

        Text {
            text: "Chiffrement : AES-256"
            font.pixelSize: 14
        }

        Button {
            text: "Activer 2FA"
            width: parent.width * 0.8
        }

        Text {
            text: "Dernière alerte : Aucune"
            font.pixelSize: 14
        }

        Button {
            text: "Voir les logs"
            width: parent.width * 0.8
        }
    }
}
