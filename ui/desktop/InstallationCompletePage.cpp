#include <QWidget>
#include <QLabel>
#include <QPushButton>

class InstallationCompletePage : public QWidget {
    Q_OBJECT

public:
    InstallationCompletePage(QWidget *parent = nullptr) : QWidget(parent) {
        QLabel *completeMessage = new QLabel("Installation terminée avec succès !", this);
        QLabel *nextStepsMessage = new QLabel("Vous recevrez toutes les notifications de gestion réseau.", this);
        QPushButton *finishButton = new QPushButton("Lancer le Logiciel", this);

        // Layout et connexion du signal de fin
        // Layout à ajouter ici
    }
};
