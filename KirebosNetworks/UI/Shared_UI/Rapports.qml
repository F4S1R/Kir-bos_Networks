Rectangle {
    width: 1200; height: 800
    Text { text: "Rapports"; anchors.centerIn: parent }

    Button { text: "Générer PDF"; onClicked: { generateReport() } }
    Button { text: "Télécharger Rapport"; onClicked: { downloadReport() } }

    ListView {
        id: dataList
        model: reportDataModel
        anchors.top: parent.top; anchors.bottom: parent.bottom
        delegate: Item {
            Text { text: model.timestamp + " - " + model.event }
        }
    }
}
