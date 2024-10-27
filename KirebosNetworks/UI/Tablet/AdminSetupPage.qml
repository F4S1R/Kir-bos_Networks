import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 800
    height: 1200
    title: "Configuration Admin"

    Column {
        anchors.centerIn: parent
        spacing: 20
        padding: 20

        Image {
            source: "Assets/logo.png"
            width: 200
            height: 200
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Text {
            text: "Configuration de l'Administrateur"
            font.pixelSize: 24
            font.bold: true
            horizontalAlignment: Text.AlignHCenter
        }

        TextField {
            id: adminName
            placeholderText: "Nom complet"
            width: parent.width * 0.6
        }

        TextField {
            id: adminEmail
            placeholderText: "Email"
            width: parent.width * 0.6
        }

        TextField {
            id: adminPassword
            placeholderText: "Mot de passe"
            echoMode: TextInput.Password
            width: parent.width * 0.6
        }

        TextField {
            id: confirmPassword
            placeholderText: "Confirmer le mot de passe"
            echoMode: TextInput.Password
            width: parent.width * 0.6
        }

        Button {
            text: "Enregistrer"
            width: parent.width * 0.4
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }
}
