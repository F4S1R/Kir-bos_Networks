import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 360
    height: 640
    title: "Gestion des Utilisateurs"

    Column {
        anchors.centerIn: parent
        spacing: 20
        padding: 20

        Text {
            text: "Gestion des Utilisateurs"
            font.pixelSize: 24
            font.bold: true
        }

        Button {
            text: "Ajouter Utilisateur"
            width: parent.width * 0.6
        }

        TableView {
            width: parent.width
            height: 300
            model: TableModel {
                TableModelColumn { display: "Nom" }
                TableModelColumn { display: "Rôle" }
                TableModelColumn { display: "Statut" }
            }
        }
    }
}
