# Référence de l'API Étendue de Kirebos Networks

## Introduction
Ce document fournit des informations détaillées sur les extensions API disponibles dans Kirebos Networks, permettant aux développeurs de créer des intégrations personnalisées avec les fonctionnalités avancées du projet.

## Points d'Accès Disponibles

### /api/v1/dmz/monitor
**Description** : Permet de surveiller l'état actuel de la DMZ en temps réel.
- **Méthode** : GET
- **Paramètres** : Aucun
- **Réponse** : JSON avec les informations de statut.

### /api/v1/dmz/failover
**Description** : Active la bascule vers l'IP secondaire en cas de défaillance.
- **Méthode** : POST
- **Paramètres** : `primary_ip`, `secondary_ip`
- **Réponse** : Confirmation de la bascule.
