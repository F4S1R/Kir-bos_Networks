import QtQuick 2.15
import QtQuick.Controls 2.15

Popup {
    width: 300
    height: 200
    modal: true

    Column {
        spacing: 10
        padding: 15
        anchors.centerIn: parent

        Image {
            source: "Assets/logo.png"
            width: 80
            height: 80
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Text {
            text: "Désinstallation en cours..."
            font.pixelSize: 14
            font.bold: true
            horizontalAlignment: Text.AlignHCenter
        }

        ProgressBar {
            width: parent.width * 0.8
            indeterminate: true
        }

        ListView {
            width: parent.width * 0.8
            height: 50
            model: ListModel {
                ListElement { item: "Suppression des données utilisateur..." }
                ListElement { item: "Désinstallation du module serveur..." }
                ListElement { item: "Nettoyage des fichiers temporaires..." }
            }
            delegate: Text { text: item }
        }
    }
}
