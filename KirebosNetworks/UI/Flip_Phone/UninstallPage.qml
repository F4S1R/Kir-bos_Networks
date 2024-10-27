import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 240
    height: 320
    title: "Désinstallation"

    Column {
        spacing: 10
        padding: 10

        Image {
            source: "Assets/logo.png"
            width: 80
            height: 80
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Text { text: "Désinstaller Kirebos Networks ?"; font.pixelSize: 12; font.bold: true }

        CheckBox { text: "Logiciel"; checked: true }
        CheckBox { text: "Module serveur" }

        Button { text: "Désinstaller"; width: parent.width * 0.8; onClicked: uninstallPopup.open() }
        Button { text: "Annuler"; width: parent.width * 0.8 }
    }
}
