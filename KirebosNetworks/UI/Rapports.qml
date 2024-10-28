import QtQuick 2.0

Rectangle {
    Text { text: "Rapports"; anchors.centerIn: parent }
    Button { text: "Générer PDF"; onClicked: { generateReport() } }
    Button { text: "Filtrer par Date"; onClicked: { dateFilter.open() } }
}
