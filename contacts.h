#ifndef CONTACTS_H
#define CONTACTS_H
#include "MonException.h"
#include <iostream>
#include <algorithm>


using namespace std;

class Contacts
{

    private:
        int Identifiant;
        string Nom;
        string Prenom;
        char Sexe;

    public:
        Contacts(int=0, string="" , string="" ,char='O');
        ~Contacts();

        int GetIdentifiant() { return Identifiant; }

        void SetIdentifiant(int val) { Identifiant = val; }

        string GetNom() { return Nom; }

        void SetNom(string val)
        {
            if (val.length() <= 30)
            {
            transform(val.begin(), val.end(),val.begin(), ::toupper);
            Nom=val;
            }else throw MonException(Erreurs::ERR_NOM);
        }

        string GetPrenom() {return Prenom; }

        void SetPrenom(string val)
        {
            if(val.length()<=30)
            {
                transform(begin(val), end(val),begin(val), ::tolower);
                val[0] = toupper(val[0]);
                Prenom=val;
            }else throw MonException(Erreurs::ERR_PRE);}

        char GetSexe() { return Sexe; }

        void SetSexe(char val)
        {
            if (val=='M' || val=='F')
            {
                Sexe = val;
            }else throw MonException(Erreurs::ERR_SEXE);
            Sexe = val;
        }

        virtual void affiche();

};

#endif // CONTACTS_H
