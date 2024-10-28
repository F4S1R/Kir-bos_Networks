import QtQuick 2.0

Rectangle {
    width: 1200; height: 800
    Text { text: "Paramètres Sécurité Cloud"; anchors.centerIn: parent }
    
    Button { text: "Activer Brouillage GSM"; onClicked: { activateGSMJammer() } }
    Button { text: "Bannir Appareil"; onClicked: { banDevice() } }
    Button { text: "Vérification d'Identité Distante"; onClicked: { remoteIdentityCheck() } }
}
