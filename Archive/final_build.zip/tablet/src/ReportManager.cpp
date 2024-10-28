#include "hpdf.h"
#include <sqlite3.h>
#include <iostream>

void error_handler(HPDF_STATUS error_no, HPDF_STATUS detail_no, void *user_data) {
    std::cout << "PDF Error: " << error_no << ", detail: " << detail_no << std::endl;
}

void generateReport() {
    HPDF_Doc pdf = HPDF_New(error_handler, nullptr);
    HPDF_SetCompressionMode(pdf, HPDF_COMP_ALL);
    HPDF_Page page = HPDF_AddPage(pdf);
    HPDF_Page_SetFontAndSize(page, HPDF_GetFont(pdf, "Helvetica", nullptr), 12);
    HPDF_Page_BeginText(page);
    HPDF_Page_TextOut(page, 50, 750, "Rapport Kirebos Networks");

    sqlite3* db;
    sqlite3_open("kirebos_networks.db", &db);
    sqlite3_stmt* stmt;
    sqlite3_prepare_v2(db, "SELECT * FROM logs;", -1, &stmt, nullptr);

    int y = 700;
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        std::string log = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1)) + std::string(" - ") +
                          reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2)) + std::string(": ") +
                          reinterpret_cast<const char*>(sqlite3_column_text(stmt, 3));
        HPDF_Page_TextOut(page, 50, y, log.c_str());
        y -= 20;
    }

    HPDF_Page_EndText(page);
    HPDF_SaveToFile(pdf, "report.pdf");
    HPDF_Free(pdf);
    sqlite3_finalize(stmt);
    sqlite3_close(db);
}
