import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 800
    height: 1200
    title: "Configuration Réseau"

    Column {
        anchors.centerIn: parent
        spacing: 20

        Text {
            text: "Configuration Réseau"
            font.pixelSize: 32
            font.bold: true
        }

        TextField {
            id: ssid
            placeholderText: "SSID WiFi"
            width: parent.width * 0.6
        }

        TextField {
            id: wifiPassword
            placeholderText: "Mot de passe WiFi"
            echoMode: TextInput.Password
            width: parent.width * 0.6
        }

        TextField {
            id: apn
            placeholderText: "Nom de l'APN"
            width: parent.width * 0.6
        }

        Button {
            text: "Enregistrer"
            width: parent.width * 0.4
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }
}
