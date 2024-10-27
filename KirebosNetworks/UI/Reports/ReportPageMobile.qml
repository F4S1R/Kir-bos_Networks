import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 360
    height: 640
    title: "Rapports d'Activité"

    Column {
        anchors.fill: parent
        spacing: 20
        padding: 20

        Text {
            text: "Rapports d'Activité"
            font.pixelSize: 24
            font.bold: true
        }

        ComboBox {
            id: reportType
            model: ["Rapport Journalier", "Rapport Hebdomadaire", "Rapport Mensuel"]
            width: parent.width * 0.8
        }

        Button {
            text: "Générer Rapport"
            width: parent.width * 0.5
            anchors.horizontalCenter: parent.horizontalCenter
        }

        TableView {
            width: parent.width
            height: 300
            model: TableModel {
                TableModelColumn { display: "Date" }
               
