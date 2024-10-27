import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 800
    height: 1200
    title: "Gestion des Utilisateurs"

    Column {
        anchors.centerIn: parent
        spacing: 20

        Text {
            text: "Gestion des Utilisateurs"
            font.pixelSize: 28
            font.bold: true
        }

        Button {
            text: "Ajouter Utilisateur"
            width: parent.width * 0.4
        }

        TableView {
            width: parent.width
            height: 600
            model: TableModel {
                TableModelColumn { display: "Nom" }
                TableModelColumn { display: "Rôle" }
                TableModelColumn { display: "Statut" }
            }
        }
    }
}
