import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 240
    height: 320
    title: "Connexion"

    Column {
        spacing: 10
        padding: 10

        Text { text: "Connexion"; font.pixelSize: 16; font.bold: true; }

        TextField {
            placeholderText: "Nom d'utilisateur"
            width: parent.width * 0.9
        }

        TextField {
            placeholderText: "Mot de passe"
            echoMode: TextInput.Password
            width: parent.width * 0.9
        }

        Button { text: "Connecter"; width: parent.width * 0.8 }
    }
}
