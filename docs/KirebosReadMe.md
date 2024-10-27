Kirébos Networks
Description

Kirébos Networks est un logiciel de gestion de réseau conçu pour le déploiement multiplateforme (desktop, mobile, tablette, cloud). Il permet une administration centralisée, des notifications de surveillance en temps réel, et un support de configurations spécifiques, incluant une DMZ autonome.
Structure des Dossiers

bash

Kirebos_Networks/
│
├── ui/                 # Interfaces utilisateur pour chaque plateforme
│   ├── desktop/        # Interface pour bureau en C++
│   ├── mobile/         # Interface mobile en C++
│   ├── tablet/         # Interface tablette en C++
│   ├── flip_phone/     # Interface minimaliste pour flip phone
│   └── cloud/          # Interface cloud, configuration en Python
│
├── dmz/                # Scripts DMZ en Python pour le Raspberry Pi
├── backend/            # Requêtes de gestion réseau et notifications
├── scripts/            # Scripts de déploiement multiplateforme (install, update)
└── docs/               # Documentation et guides d’installation

Fonctionnalités Clés

    Installation centralisée : Interface d’installation unique demandant l’e-mail, téléphone, et clé cloud (optionnel).
    Notifications et Suivi : L’administrateur reçoit toutes les alertes pour une gestion réseau efficace.
    Multilingue et Réactif : Interface responsive en plusieurs langues.

Distribution Officielle

La version officielle de Kirébos Networks sera packagée avec tous les scripts et les dépendances nécessaires pour une installation simple.