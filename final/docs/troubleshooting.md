# Guide de Dépannage - Kirebos Networks

## Problèmes de Connexion
### Problème : Impossible de se connecter au réseau
1. Vérifiez la connectivité avec le serveur en utilisant `ping`.
2. Assurez-vous que les configurations réseau sont correctes dans `network_config.yaml`.
3. Redémarrez le module réseau.

## Problèmes de Sécurité
### Problème : Connexions non autorisées détectées
1. Vérifiez les logs pour identifier l’IP source de la connexion.
2. Ajoutez cette IP à la liste des IP bloquées dans `security_settings.yaml`.
3. Réinitialisez les règles de pare-feu si nécessaire.

## Problèmes de Journalisation
### Problème : Fichier de log non accessible
1. Assurez-vous que le fichier de log est bien présent dans `/opt/kirebos_networks/logs`.
2. Vérifiez les permissions du fichier.
3. Si le fichier est manquant, redémarrez le service pour générer de nouveaux logs.
