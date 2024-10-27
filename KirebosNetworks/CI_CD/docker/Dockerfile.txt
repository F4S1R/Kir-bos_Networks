# Dockerfile pour Kirébos Networks
FROM ubuntu:latest

RUN apt-get update && apt-get install -y \
    build-essential \
    python3 \
    python3-pip \
    iptables

# Installer psutil pour la surveillance système
RUN pip3 install psutil

# Copier les fichiers du projet
COPY . /app
WORKDIR /app

# Exécuter le script de surveillance
CMD ["python3", "DMZ/monitoring/connection_monitor.py"]
