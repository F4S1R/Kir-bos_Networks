import QtQuick 2.0

Rectangle {
    width: 800; height: 600
    Text { text: "Kirebos Cloud - Contrôle Admin"; anchors.centerIn: parent }

    Rectangle { id: internetStatus; width: 150; height: 50; color: "gray"; Text { text: "Intranet Sécurisé" } }
    Button { text: "Exécuter Actions Sécurité"; onClicked: { console.log("Action de sécurité exécutée") } }
}
