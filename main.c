#include <stdio.h>
#include "./sqlite-amalgamation-3270200/sqlite3.h"
#include <stdlib.h>
#include <string.h>


static int appel(void *data, int argc, char **argv, char **azColName){
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
   char *sql, *sql_paire, *sql_impaire, *sql_nom, *sql_ville, *sql_add, *sql_delete;
    const char* data1 = "Professionnel ";
    const char* data2 = "Particulier ";
    const char* data3 = "Contact ";


   /* Ouvrir la base donnée */
   rc = sqlite3_open("dbContacts.db", &db);

   if( rc ) {
      fprintf(stderr, "Base de donnee ne peut pas etre ouverte: %s\n", sqlite3_errmsg(db));
      return(0);
   } else {
      fprintf(stderr, "Base de donnee ouverte avec succes\n");
   }



   /* Créer requête SQL */
   sql_paire = "SELECT * from CONTACTS where IdContact%2=0";
    sql_impaire = "SELECT * from CONTACTS where IdContact%2";
    sql = "SELECT * from CONTACTS";
    sql_nom = "SELECT Nom from CONTACTS";
    sql_ville = "SELECT ville from CONTACTS " ;
    sql_add = "INSERT INTO CONTACTS (IdContact,	Nom ,Prenom ,Sexe ,Entreprise ,rue ,Complement ,cp ,Ville ,mail , dtNaissance) "  \
            "VALUES (12, 'DUPONT', 'Frederic', 'M', 'AXA', '12, rue de rivoli', 'digicode 0001', 75001, 'Paris', 'test@hotmail.fr', 1985-11-12  ); " ;

    sql_delete = "DELETE FROM CONTACTS where IdContact=12" ;

    char c;
    do{

    printf("Bienvenue!\n\n");
    int option,i=0;

    printf("---Menu---\n\n");
    printf("1. Lister contacts professionnels\n");
    printf("2. Lister contacts particuliers\n");
    printf("3. Lister les deux\n");
    printf("4. Lister nom\n");
    printf("5. Lister ville\n");
    printf("6. Ajout contact\n");
    printf("7. Supprimer contact\n");
    printf("\nVotre choix ? ");
    scanf("%d", &option);




        switch(option)
        {
            case 1:
            /* Exécuter requête SQL */
            rc = sqlite3_exec(db, sql_paire, appel, (void*)data1, &zErrMsg);
            if( rc != SQLITE_OK ) {
            fprintf(stderr, "Erreur SQL: %s\n", zErrMsg);
            sqlite3_free(zErrMsg);
            } else {
            fprintf(stdout, "Operations faites correctement\n");
            }
            break;

            case 2:
            rc = sqlite3_exec(db, sql_impaire, appel, (void*)data2, &zErrMsg);
            if( rc != SQLITE_OK ) {
            fprintf(stderr, "Erreur SQL: %s\n", zErrMsg);
            sqlite3_free(zErrMsg);
            } else {
            fprintf(stdout, "Operations faites correctement\n");
            }
            break;

            case 3:
            rc = sqlite3_exec(db, sql, appel, (void*)data3, &zErrMsg);
            if( rc != SQLITE_OK ) {
            fprintf(stderr, "Erreur SQL: %s\n", zErrMsg);
            sqlite3_free(zErrMsg);
            } else {
            fprintf(stdout, "Operations faites correctement\n");
            }
            break;

            case 4:
            rc = sqlite3_exec(db, sql_nom, appel, (void*)data3, &zErrMsg);
            if( rc != SQLITE_OK ) {
            fprintf(stderr, "Erreur SQL: %s\n", zErrMsg);
            sqlite3_free(zErrMsg);
            } else {
            fprintf(stdout, "Operations faites correctement\n");
            }
            break;


            case 5:
            rc = sqlite3_exec(db, sql_ville, appel, (void*)data3, &zErrMsg);
            if( rc != SQLITE_OK ) {
            fprintf(stderr, "Erreur SQL: %s\n", zErrMsg);
            sqlite3_free(zErrMsg);
            } else {
            fprintf(stdout, "Operations faites correctement\n");
            }
            break;

            case 6:
            printf("Ajout du contact identifiant 12");
            rc = sqlite3_exec(db, sql_add, appel, 0, &zErrMsg);

            if( rc != SQLITE_OK ){
                fprintf(stderr, "SQL erreur: %s\n", zErrMsg);
                sqlite3_free(zErrMsg);
            } else {
                fprintf(stdout, "Ajoute avec succes\n");
            }
            break;

            case 7:
            printf("Suppression du contact identifiant 12\n");
            rc = sqlite3_exec(db, sql_delete, appel, 0, &zErrMsg);
            if( rc != SQLITE_OK ) {
                fprintf(stderr, "SQL error: %s\n", zErrMsg);
                sqlite3_free(zErrMsg);
            } else {
                fprintf(stdout, "Supprime avec succes\n");
            }
            break;


            default:
            printf("Erreur veuillez recommencer");
            break;





        }
    printf("\n\nContinue ? (o/n) " );
    fflush(stdin);

    scanf("%c",&c);
    i++;
    }while(c == 'o' || c == 'O');


    sqlite3_close(db);
   return 0;
}
