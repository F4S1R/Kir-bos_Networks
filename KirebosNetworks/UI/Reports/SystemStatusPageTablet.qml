import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 800
    height: 1200
    title: "État du Système"

    Column {
        anchors.centerIn: parent
        spacing: 20

        Text {
            text: "État du Système"
            font.pixelSize: 28
            font.bold: true
        }

        TableView {
            width: parent.width
            height: 600
            model: TableModel {
                TableModelColumn { display: "Module" }
                TableModelColumn { display: "Statut" }
            }
        }
    }
}
