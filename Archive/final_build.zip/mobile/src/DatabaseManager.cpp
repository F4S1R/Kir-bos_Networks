#include <sqlite3.h>
#include <iostream>
#include <string>

class DatabaseManager {
public:
    DatabaseManager() { sqlite3_open("kirebos_networks.db", &db); }
    ~DatabaseManager() { sqlite3_close(db); }

    void createTables() {
        const char* sql = "CREATE TABLE IF NOT EXISTS logs (id INTEGER PRIMARY KEY, timestamp TEXT, event_type TEXT, description TEXT);";
        sqlite3_exec(db, sql, nullptr, nullptr, nullptr);
    }

    void logEvent(const std::string& timestamp, const std::string& eventType, const std::string& description) {
        std::string sql = "INSERT INTO logs (timestamp, event_type, description) VALUES ('" + timestamp + "','" + eventType + "','" + description + "');";
        sqlite3_exec(db, sql.c_str(), nullptr, nullptr, nullptr);
    }

private:
    sqlite3* db;
};
