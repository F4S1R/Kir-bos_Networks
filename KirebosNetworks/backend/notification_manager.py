import json

def send_notification(message, priority="medium"):
    notification_data = {
        "message": message,
        "priority": priority
    }
    print("Notification envoyée :", notification_data)
}
