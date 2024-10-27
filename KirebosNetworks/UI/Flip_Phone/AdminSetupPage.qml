import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 240
    height: 320
    title: "Configuration Admin"

    Column {
        spacing: 10
        padding: 10

        Image {
            source: "Assets/logo.png"
            width: 80
            height: 80
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Text {
            text: "Configuration Admin"
            font.pixelSize: 14
            font.bold: true
        }

        TextField {
            placeholderText: "Nom complet"
            width: parent.width * 0.9
        }

        TextField {
            placeholderText: "Email"
            width: parent.width * 0.9
        }

        TextField {
            placeholderText: "Mot de passe"
            echoMode: TextInput.Password
            width: parent.width * 0.9
        }

        TextField {
            placeholderText: "Confirmer le mot de passe"
            echoMode: TextInput.Password
            width: parent.width * 0.9
        }

        Button {
            text: "Enregistrer"
            width: parent.width * 0.8
        }
    }
}
