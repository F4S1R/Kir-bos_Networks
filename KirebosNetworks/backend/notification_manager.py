import json

def send_notification(message, priority="medium"):
    # Configuration de la notification
    notification_data = {
        "message": message,
        "priority": priority
    }
    # Logique d'envoi ici
    print("Notification envoyée :", notification_data)
