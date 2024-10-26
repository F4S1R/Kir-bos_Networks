import time

def monitor_dmz():
    print("Démarrage de la surveillance de la DMZ...")
    while True:
        # Logique de surveillance (ex. lecture des logs, détection d'intrusions)
        print("Vérification des connexions dans la DMZ...")
        time.sleep(60)  # Intervalle de vérification

if __name__ == "__main__":
    monitor_dmz()
