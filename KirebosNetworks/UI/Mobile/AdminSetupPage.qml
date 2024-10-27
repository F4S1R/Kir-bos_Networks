import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 360
    height: 640
    title: "Configuration Admin"

    Column {
        anchors.centerIn: parent
        spacing: 20
        padding: 20

        Image {
            source: "Assets/logo.png"
            width: 120
            height: 120
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Text {
            text: "Configuration de l'Administrateur"
            font.pixelSize: 18
            font.bold: true
            horizontalAlignment: Text.AlignHCenter
        }

        TextField {
            id: adminName
            placeholderText: "Nom complet"
            width: parent.width * 0.8
        }

        TextField {
            id: adminEmail
            placeholderText: "Email"
            width: parent.width * 0.8
        }

        TextField {
            id: adminPassword
            placeholderText: "Mot de passe"
            echoMode: TextInput.Password
            width: parent.width * 0.8
        }

        TextField {
            id: confirmPassword
            placeholderText: "Confirmer le mot de passe"
            echoMode: TextInput.Password
            width: parent.width * 0.8
        }

        Button {
            text: "Enregistrer"
            width: parent.width * 0.5
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }
}
