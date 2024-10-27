import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 240
    height: 320
    title: "Journal des Activités"

    Column {
        spacing: 10
        padding: 10

        Text { text: "Journal des Activités"; font.pixelSize: 16; font.bold: true }

        ListView {
            width: parent.width
            height: 160
            model: ListModel {
                ListElement { heure: "08:00"; activite: "Connexion"; statut: "OK" }
                ListElement { heure: "08:30"; activite: "Déconnexion"; statut: "Échec" }
            }
            delegate: Row {
                spacing: 5
                Text { text: heure }
                Text { text: activite }
                Text { text: statut }
            }
        }

        Button { text: "Rafraîchir"; width: parent.width * 0.8 }
        Button { text: "Effacer"; width: parent.width * 0.8 }
    }
}
