#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QListWidget>

class NotificationConfigPage : public QWidget {
    Q_OBJECT

public:
    NotificationConfigPage(QWidget *parent = nullptr) : QWidget(parent) {
        QLabel *configTitle = new QLabel("Configuration des Notifications", this);
        QListWidget *configDetails = new QListWidget(this);
        configDetails->addItem("Email : xxxx@exemple.com");
        configDetails->addItem("Téléphone : +33 6 12 34 56 78");
        configDetails->addItem("Clé Cloud : ...");

        QPushButton *confirmButton = new QPushButton("Confirmer et Terminer", this);

        // Layout et connexion du signal de confirmation
        // Layout à ajouter ici
    }
};
