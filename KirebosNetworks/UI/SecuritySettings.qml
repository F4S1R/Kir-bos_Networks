import QtQuick 2.0

Rectangle {
    Text { text: "Sécurité"; anchors.centerIn: parent }
    Button { text: "Activer Brouillage GSM"; onClicked: { activateGSMJammer() } }
    Button { text: "Bannir Appareil"; onClicked: { banDevice() } }
}
