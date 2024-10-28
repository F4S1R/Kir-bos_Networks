Rectangle {
    width: 1200; height: 800
    Text { text: "Paramètres de Sécurité"; anchors.centerIn: parent }

    Button { text: "Activer Brouillage GSM"; onClicked: { activateGSMJammer() } }
    Button { text: "Bannir Appareil"; onClicked: { banDevice() } }

    Text {
        id: securityStatus
        text: "Sécurité active"
        anchors.bottom: parent.bottom
        anchors.horizontalCenter: parent.horizontalCenter
    }
}
