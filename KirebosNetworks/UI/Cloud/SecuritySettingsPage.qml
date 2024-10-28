import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 800
    height: 1200
    title: "Paramètres de Sécurité"

    Column {
        anchors.centerIn: parent
        spacing: 20

        Text {
            text: "Paramètres de Sécurité"
            font.pixelSize: 28
            font.bold: true
        }

        TextField {
            id: encryptionType
            placeholderText: "Type de Chiffrement"
            text: "AES-256"
            width: parent.width * 0.6
        }

        Button {
            text: "Modifier Clé"
            width: parent.width * 0.4
        }

        Button {
            text: "Activer 2FA"
            width: parent.width * 0.4
        }

        Button {
            text: "Configurer Alertes"
            width: parent.width * 0.4
        }
    }
}
