from controls import initialize_admin_interface, check_dmz_status, get_dmz_logs, restart_dmz

class AdminInterface:
    def __init__(self):
        print("Admin Interface initialized.")

    def start(self):
        print("Starting admin interface...")
        initialize_admin_interface()

    def check_status(self):
        check_dmz_status()

    def view_logs(self):
        get_dmz_logs()

    def reboot(self):
        restart_dmz()

# Exemple d'utilisation
if __name__ == "__main__":
    interface = AdminInterface()
    interface.start()
    interface.check_status()
    interface.view_logs()
