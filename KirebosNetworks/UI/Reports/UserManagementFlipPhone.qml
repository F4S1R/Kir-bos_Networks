import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 240
    height: 320
    title: "Utilisateurs"

    Column {
        spacing: 10
        padding: 10

        Text { text: "Gestion Utilisateurs"; font.pixelSize: 16; font.bold: true }

        Button { text: "Ajouter"; width: parent.width * 0.8 }

        ListView {
            width: parent.width
            height: 150
            model: ListModel {
                ListElement { nom: "Admin"; role: "Super" }
                ListElement { nom: "User"; role: "Utilisateur" }
            }
            delegate: Row {
                Text { text: nom + " - " + role }
            }
        }
    }
}
