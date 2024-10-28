import time
import psutil

def monitor_network():
    while True:
        connections = psutil.net_connections()
        for conn in connections:
            if conn.status == 'ESTABLISHED':
                print(f"Active connection: IP={conn.raddr.ip}, Port={conn.raddr.port}")
        time.sleep(5)

if __name__ == "__main__":
    monitor_network()
