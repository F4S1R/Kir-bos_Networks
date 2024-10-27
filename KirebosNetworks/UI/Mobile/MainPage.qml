import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 360
    height: 640
    title: "Kirebos Networks - Mobile"

    Column {
        spacing: 20
        padding: 20

        MenuBar {
            Menu {
                title: "Réseau"
                MenuItem { text: "Connexion" }
                MenuItem { text: "Déconnexion" }
                MenuItem { text: "Configuration Réseau" }
            }
            Menu {
                title: "Administration"
                MenuItem { text: "Utilisateurs" }
                MenuItem { text: "Logs" }
                MenuItem { text: "Paramètres de Sécurité" }
            }
        }

        Text { text: "Réseau Actuel"; font.pixelSize: 20; }
        TableView {
            width: parent.width
            height: 200
            model: TableModel {
                TableModelColumn { display: "Nom"; displayEdit: true }
                TableModelColumn { display: "Statut"; displayEdit: true }
            }
        }

        Text { text: "Activité"; font.pixelSize: 20; }
        ChartView {
            width: parent.width
            height: 250
            title: "Activité Réseau"
            PieSeries {
                PieSlice { label: "WiFi"; value: 50 }
                PieSlice { label: "GSM"; value: 30 }
                PieSlice { label: "Internet"; value: 20 }
            }
        }

        Row {
            spacing: 20
            Button { text: "Rafraîchir" }
            Button { text: "Exporter" }
        }
    }
}
