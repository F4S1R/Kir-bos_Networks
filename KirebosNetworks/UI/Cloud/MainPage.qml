import QtQuick 2.15
import QtQuick.Controls 2.15
import QtCharts 2.15

ApplicationWindow {
    visible: true
    width: 800
    height: 1200
    title: "Kirebos Networks - Accueil"

    Column {
        anchors.fill: parent
        spacing: 20
        padding: 20

        MenuBar {
            Menu {
                title: "Fichier"
                MenuItem { text: "Nouveau" }
                MenuItem { text: "Ouvrir" }
                MenuItem { text: "Enregistrer" }
                MenuItem { text: "Quitter" }
            }
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
            Menu {
                title: "Aide"
                MenuItem { text: "Documentation" }
                MenuItem { text: "À propos" }
            }
        }

        Text { text: "Connexions Réseau"; font.pixelSize: 20; }
        TableView {
            width: parent.width
            height: 300
            model: TableModel {
                TableModelColumn { display: "Nom"; displayEdit: true }
                TableModelColumn { display: "Statut"; displayEdit: true }
                TableModelColumn { display: "Dernière Activité"; displayEdit: true }
            }
        }

        Text { text: "Activités Réseau"; font.pixelSize: 20; }
        ChartView {
            width: parent.width
            height: 300
            title: "Activités Réseau"
            PieSeries {
                PieSlice { label: "WiFi"; value: 40 }
                PieSlice { label: "Bluetooth"; value: 20 }
                PieSlice { label: "GSM"; value: 30 }
                PieSlice { label: "Internet"; value: 10 }
            }
        }

        Row {
            spacing: 20
            Button { text: "Actualiser" }
            Button { text: "Exporter" }
            Button { text: "Paramètres" }
        }
    }
}
