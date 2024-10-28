import QtQuick 2.0

Rectangle {
    Text { text: "Paramètres Réseau"; anchors.centerIn: parent }
    Button { text: "WiFi"; onClicked: { connectWiFi() } }
    Button { text: "Bluetooth"; onClicked: { connectBluetooth() } }
}
