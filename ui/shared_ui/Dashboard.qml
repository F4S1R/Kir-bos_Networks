import QtQuick 2.0

Rectangle {
    width: 1200; height: 800
    Text { text: "Dashboard - Kirebos Networks"; anchors.centerIn: parent }

    Button { text: "Voir Rapports"; onClicked: { reportsPage.open() } }
    Button { text: "Paramètres Réseau"; onClicked: { networkSettings.open() } }
    Button { text: "Sécurité"; onClicked: { securitySettings.open() } }

    Text {
        id: realTimeStatus
        text: "Status : Réseau connecté"
        anchors.bottom: parent.bottom
        anchors.horizontalCenter: parent.horizontalCenter
    }
}
