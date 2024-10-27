#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class InstallationPage : public QWidget {
    Q_OBJECT

public:
    InstallationPage(QWidget *parent = nullptr) : QWidget(parent) {
        QLabel *emailLabel = new QLabel("Email :", this);
        QLineEdit *emailInput = new QLineEdit(this);

        QLabel *phoneLabel = new QLabel("Numéro de Téléphone :", this);
        QLineEdit *phoneInput = new QLineEdit(this);

        QLabel *cloudLabel = new QLabel("Clé Cloud (optionnel) :", this);
        QLineEdit *cloudKeyInput = new QLineEdit(this);

        QPushButton *installButton = new QPushButton("Installer", this);

        // Layout et connexion des signaux pour le bouton d'installation
        // Layout à ajouter ici
    }
};
