import QtQuick 2.15
import QtQuick.Controls 2.15

Popup {
    width: 400
    height: 300
    modal: true

    Column {
        spacing: 10
        padding: 20
        anchors.centerIn: parent

        Image {
            source: "Assets/logo.png"
            width: 100
            height: 100
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Text {
            text: "Désinstallation en cours..."
            font.pixelSize: 18
            font.bold: true
            horizontalAlignment: Text.AlignHCenter
        }

        ProgressBar {
            width: parent.width * 0.8
            indeterminate: true
        }

        ListView {
            width: parent.width * 0.8
            height: 80
            model: ListModel {
                ListElement { item: "Suppression des données utilisateur..." }
                ListElement { item: "Désinstallation du module serveur..." }
                ListElement { item: "Nettoyage des fichiers temporaires..." }
            }
            delegate: Text { text: item }
        }
    }
}
