import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 800
    height: 1200
    title: "Journal des Activités"

    Column {
        anchors.fill: parent
        spacing: 20
        padding: 20

        Text {
            text: "Journal des Activités Réseau"
            font.pixelSize: 28
            font.bold: true
        }

        TableView {
            width: parent.width
            height: 600
            model: TableModel {
                TableModelColumn { display: "Heure"; displayEdit: true }
                TableModelColumn { display: "Activité"; displayEdit: true }
                TableModelColumn { display: "Statut"; displayEdit: true }
            }
        }

        Row {
            spacing: 20
            Button { text: "Rafraîchir" }
            Button { text: "Exporter" }
            Button { text: "Effacer" }
        }
    }
}
