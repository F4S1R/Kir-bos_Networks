import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 360
    height: 640
    title: "État du Système"

    Column {
        anchors.centerIn: parent
        spacing: 20
        padding: 20

        Text {
            text: "État du Système"
            font.pixelSize: 24
            font.bold: true
        }

        TableView {
            width: parent.width
            height: 300
            model: TableModel {
                TableModelColumn { display: "Module" }
                TableModelColumn { display: "Statut" }
            }
        }
    }
}
