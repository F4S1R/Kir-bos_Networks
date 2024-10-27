import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 360
    height: 640
    title: "Désinstallation"

    Column {
        anchors.centerIn: parent
        spacing: 20
        padding: 20

        Image {
            source: "Assets/logo.png"
            width: 120
            height: 120
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Text {
            text: "Voulez-vous désinstaller Kirebos Networks ?"
            font.pixelSize: 16
            horizontalAlignment: Text.AlignHCenter
        }

        CheckBox { text: "Désinstaller le logiciel"; checked: true }
        CheckBox { text: "Désinstaller le module serveur" }

        Row {
            spacing: 20
            Button { text: "Désinstaller"; onClicked: uninstallPopup.open() }
            Button { text: "Annuler" }
        }
    }
}
