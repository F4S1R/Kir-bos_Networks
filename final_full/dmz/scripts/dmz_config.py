# dmz_config.py

class DMZConfig:
    def __init__(self):
        self.firewall_enabled = True
        self.intrusion_detection_enabled = True
        self.allowed_ips = []
        self.blocked_ips = []

    def initialize(self):
        print("Initializing DMZ configuration...")
        self.load_default_settings()

    def load_default_settings(self):
        # Load default settings for the DMZ
        self.allowed_ips = ["192.168.1.1", "192.168.1.2"]
        self.blocked_ips = ["10.0.0.1"]
        print("Default settings loaded.")

    def enable_firewall(self):
        self.firewall_enabled = True
        print("Firewall enabled.")

    def disable_firewall(self):
        self.firewall_enabled = False
        print("Firewall disabled.")

    def enable_intrusion_detection(self):
        self.intrusion_detection_enabled = True
        print("Intrusion detection enabled.")

    def disable_intrusion_detection(self):
        self.intrusion_detection_enabled = False
        print("Intrusion detection disabled.")

    def add_allowed_ip(self, ip_address):
        if ip_address not in self.allowed_ips:
            self.allowed_ips.append(ip_address)
            print(f"IP address {ip_address} added to allowed list.")

    def add_blocked_ip(self, ip_address):
        if ip_address not in self.blocked_ips:
            self.blocked_ips.append(ip_address)
            print(f"IP address {ip_address} added to blocked list.")

    def get_status(self):
        return {
            "firewall_enabled": self.firewall_enabled,
            "intrusion_detection_enabled": self.intrusion_detection_enabled,
            "allowed_ips": self.allowed_ips,
            "blocked_ips": self.blocked_ips,
        }

if __name__ == "__main__":
    config = DMZConfig()
    config.initialize()
    config.enable_firewall()
    config.enable_intrusion_detection()
    print("DMZ Config status:", config.get_status())
