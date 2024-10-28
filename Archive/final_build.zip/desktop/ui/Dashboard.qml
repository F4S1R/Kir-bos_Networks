import QtQuick 2.0

Rectangle {
    width: 1200; height: 800
    Text { text: "Kirebos Desktop - Haute Sécurité"; anchors.centerIn: parent }

    // Indicateurs Bluetooth, GSM, WiFi, Internet
    Rectangle { id: bluetoothStatus; width: 200; height: 50; color: "blue"; Text { text: "Bluetooth Actif" } }
    Rectangle { id: gsmStatus; width: 200; height: 50; color: "green"; Text { text: "GSM Actif" } }
    Rectangle { id: wifiStatus; width: 200; height: 50; color: "cyan"; Text { text: "WiFi Actif" } }
    Rectangle { id: internetStatus; width: 200; height: 50; color: "gray"; Text { text: "Intranet Sécurisé" } }

    // Contrôles de Sécurité
    Button { text: "Bannir et brouiller GSM"; onClicked: { console.log("Brouillage activé") } }
}
