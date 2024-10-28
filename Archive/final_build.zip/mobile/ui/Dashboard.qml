import QtQuick 2.0

Rectangle {
    width: 600; height: 400
    Text { text: "Kirebos Mobile - Surveillance Réseau"; anchors.centerIn: parent }

    Rectangle { id: wifiStatus; width: 100; height: 30; color: "cyan"; Text { text: "WiFi Actif" } }
    Rectangle { id: internetStatus; width: 100; height: 30; color: "gray"; Text { text: "Intranet Sécurisé" } }

    Button { text: "Bannir Appareil"; onClicked: { console.log("Appareil banni") } }
}
