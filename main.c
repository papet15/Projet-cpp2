#include <stdio.h>
#include "./sqlite-amalgamation-3270200/sqlite3.h"
#include <stdlib.h>
#include <string.h>


static int callback(void *data, int argc, char **argv, char **azColName){
   int i;
   fprintf(stderr, "%s: ", (const char*)data);

   for(i = 0; i<argc; i++){
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }

   printf("\n");
   return 0;
}

int main(int argc, char* argv[]) {
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;
   char *sql;
   const char* data = "Contact";

   /* Ouvrir la base donnée */
   rc = sqlite3_open("dbContacts.db", &db);

   if( rc ) {
      fprintf(stderr, "Base de donnee ne peut pas etre ouverte: %s\n", sqlite3_errmsg(db));
      return(0);
   } else {
      fprintf(stderr, "Base de donnee ouverte avec succes\n");
   }

   /* Créer requête SQL */
   sql = "SELECT * from CONTACTS";

   /* Exécuter requête SQL */
   rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);

   if( rc != SQLITE_OK ) {
      fprintf(stderr, "Erreur SQL: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } else {
      fprintf(stdout, "Operations faites correctement\n");
   }
   sqlite3_close(db);
   return 0;
}
