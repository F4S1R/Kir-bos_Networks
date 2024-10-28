import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 800
    height: 1200
    title: "Connexion - Kirebos Networks"

    Column {
        anchors.centerIn: parent
        spacing: 20

        Text {
            text: "Connexion à Kirebos Networks"
            font.pixelSize: 32
            font.bold: true
        }

        TextField {
            id: username
            placeholderText: "Nom d'utilisateur"
            width: parent.width * 0.6
        }

        TextField {
            id: password
            placeholderText: "Mot de passe"
            echoMode: TextInput.Password
            width: parent.width * 0.6
        }

        Button {
            text: "Se Connecter"
            width: parent.width * 0.4
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }
}
