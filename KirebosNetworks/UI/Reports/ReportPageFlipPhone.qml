import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 240
    height: 320
    title: "Rapports"

    Column {
        spacing: 10
        padding: 10

        Text { text: "Rapports d'Activité"; font.pixelSize: 16; font.bold: true }

        ComboBox {
            model: ["Journalier", "Hebdomadaire", "Mensuel"]
            width: parent.width * 0.9
        }

        Button { text: "Générer"; width: parent.width * 0.8 }

        ListView {
            width: parent.width
            height: 150
            model: ListModel {
                ListElement { date: "01/11"; activite: "Connexion"; statut: "OK" }
                ListElement { date: "02/11"; activite: "Déconnexion"; statut: "Échec" }
            }
            delegate: Row {
                Text { text: date + " " + activite + " " + statut }
            }
        }
    }
}
