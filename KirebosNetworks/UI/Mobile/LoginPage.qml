import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 360
    height: 640
    title: "Connexion - Kirebos Networks"

    Column {
        anchors.centerIn: parent
        spacing: 20

        Text {
            text: "Connexion à Kirebos Networks"
            font.pixelSize: 24
            font.bold: true
            horizontalAlignment: Text.AlignHCenter
        }

        TextField {
            id: username
            placeholderText: "Nom d'utilisateur"
            width: parent.width * 0.8
        }

        TextField {
            id: password
            placeholderText: "Mot de passe"
            echoMode: TextInput.Password
            width: parent.width * 0.8
        }

        Button {
            text: "Se Connecter"
            width: parent.width * 0.5
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }
}
