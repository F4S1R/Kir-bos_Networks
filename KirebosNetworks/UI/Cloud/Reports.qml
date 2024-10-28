import QtQuick 2.0

Rectangle {
    width: 1200; height: 800
    Text { text: "Rapports Cloud"; anchors.centerIn: parent }
    
    Button { text: "Générer PDF"; onClicked: { generateReport() } }
    Button { text: "Filtrer par Date"; onClicked: { dateFilter.open() } }
    Button { text: "Télécharger Rapport Cloud"; onClicked: { downloadCloudReport() } }
}
