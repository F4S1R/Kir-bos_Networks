import QtQuick 2.0

Rectangle {
    width: 240; height: 320
    Text { text: "Kirebos Flip - Surveillance"; anchors.centerIn: parent }

    Rectangle { id: gsmStatus; width: 100; height: 30; color: "green"; Text { text: "GSM Actif" } }
    Rectangle { id: internetStatus; width: 100; height: 30; color: "gray"; Text { text: "Intranet Sécurisé" } }
}
