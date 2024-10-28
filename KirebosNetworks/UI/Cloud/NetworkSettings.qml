import QtQuick 2.0

Rectangle {
    width: 1200; height: 800
    Text { text: "Paramètres Réseau Cloud"; anchors.centerIn: parent }
    
    Button { text: "WiFi"; onClicked: { connectWiFi() } }
    Button { text: "Bluetooth"; onClicked: { connectBluetooth() } }
    Button { text: "Configurer Réseau Externe"; onClicked: { externalNetworkSettings.open() } }
}
