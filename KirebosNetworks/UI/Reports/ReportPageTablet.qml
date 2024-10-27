import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 800
    height: 1200
    title: "Rapports d'Activité"

    Column {
        anchors.centerIn: parent
        spacing: 20

        Text {
            text: "Rapports d'Activité"
            font.pixelSize: 28
            font.bold: true
        }

        ComboBox {
            id: reportType
            model: ["Rapport Journalier", "Rapport Hebdomadaire", "Rapport Mensuel"]
            width: parent.width * 0.6
        }

        Button {
            text: "Générer Rapport"
            width: parent.width * 0.4
        }

        TableView {
            width: parent.width
            height: 600
            model: TableModel {
                TableModelColumn { display: "Date" }
                TableModelColumn { display: "Activité" }
                TableModelColumn { display: "Statut" }
            }
        }
    }
}
