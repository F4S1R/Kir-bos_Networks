import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 240
    height: 320
    title: "Tableau de Bord"

    Column {
        spacing: 10
        padding: 10

        Text { text: "Tableau de Bord"; font.pixelSize: 16; font.bold: true }

        Text { text: "Activité Réseau" }

        ListView {
            width: parent.width
            height: 100
            model: ListModel {
                ListElement { label: "WiFi"; pourcentage: "40%" }
                ListElement { label: "Bluetooth"; pourcentage: "20%" }
                ListElement { label: "GSM"; pourcentage: "30%" }
                ListElement { label: "Internet"; pourcentage: "10%" }
            }
            delegate: Row {
                Text { text: label + ": " + pourcentage }
            }
        }

        Button { text: "Rafraîchir"; width: parent.width * 0.8 }
        Button { text: "Exporter"; width: parent.width * 0.8 }
    }
}
