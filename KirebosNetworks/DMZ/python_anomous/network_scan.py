import scapy.all as scapy

def scan_network():
    arp_request = scapy.ARP(pdst="192.168.2.1/24")
    broadcast = scapy.Ether(dst="ff:ff:ff:ff:ff:ff")
    arp_request_broadcast = broadcast/arp_request
    answered_list = scapy.srp(arp_request_broadcast, timeout=1, verbose=False)[0]

    devices = []
    for element in answered_list:
        devices.append({'ip': element[1].psrc, 'mac': element[1].hwsrc})
        print(f"Detected device - IP: {element[1].psrc}, MAC: {element[1].hwsrc}")
    return devices
