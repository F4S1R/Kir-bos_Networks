import QtQuick 2.0

Rectangle {
    width: 1200; height: 800
    Text { text: "Interface Principale - Kirebos Networks"; anchors.centerIn: parent }
    Button { text: "Rapports"; onClicked: { reportsPage.open() } }
    Button { text: "Réseaux"; onClicked: { networkPage.open() } }
    Button { text: "Sécurité"; onClicked: { securityPage.open() } }
}
