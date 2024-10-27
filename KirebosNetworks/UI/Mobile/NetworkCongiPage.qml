import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 360
    height: 640
    title: "Configuration Réseau"

    Column {
        anchors.centerIn: parent
        spacing: 15
        padding: 20

        Text {
            text: "Configuration Réseau"
            font.pixelSize: 24
            font.bold: true
        }

        TextField {
            id: ssid
            placeholderText: "SSID WiFi"
            width: parent.width * 0.8
        }

        TextField {
            id: wifiPassword
            placeholderText: "Mot de passe WiFi"
            echoMode: TextInput.Password
            width: parent.width * 0.8
        }

        TextField {
            id: apn
            placeholderText: "Nom de l'APN"
            width: parent.width * 0.8
        }

        Button {
            text: "Enregistrer"
            width: parent.width * 0.5
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }
}
