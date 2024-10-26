import controls

def main():
    print("Interface d'administration de la DMZ")
    controls.initialize_admin_interface()
    controls.check_dmz_status()
    controls.get_dmz_logs()

if __name__ == "__main__":
    main()
