import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 240
    height: 320
    title: "Configuration Réseau"

    Column {
        spacing: 10
        padding: 10

        Text { text: "Configuration Réseau"; font.pixelSize: 16; font.bold: true; }

        TextField {
            placeholderText: "SSID WiFi"
            width: parent.width * 0.9
        }

        TextField {
            placeholderText: "Mot de passe WiFi"
            echoMode: TextInput.Password
            width: parent.width * 0.9
        }

        TextField {
            placeholderText: "APN"
            width: parent.width * 0.9
        }

        Button { text: "Enregistrer"; width: parent.width * 0.8 }
    }
}
