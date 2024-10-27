import time
import logging
import psutil  # Utilisation pour surveillance système (ex : CPU, Mémoire)
import subprocess

logging.basicConfig(filename='../Security/IDS/ids_log.txt', level=logging.INFO)

def monitor_connections():
    while True:
        # Exemple d'utilisation de psutil pour surveiller l'usage CPU et mémoire de la DMZ
        cpu_usage = psutil.cpu_percent(interval=1)
        memory_usage = psutil.virtual_memory().percent
        logging.info(f"CPU Usage: {cpu_usage}%, Memory Usage: {memory_usage}%")

        # Commande iptables pour vérifier les connexions
        result = subprocess.run(["iptables", "-L"], capture_output=True, text=True)
        logging.info("Vérification des connexions : %s", result.stdout)
        time.sleep(10)  # Surveillance toutes les 10 secondes

if __name__ == "__main__":
    monitor_connections()
