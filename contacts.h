#ifndef CONTACTS_H
#define CONTACTS_H

#include <iostream>



using namespace std;

class Contacts
{

    private:
        int Identifiant;
        string Nom;
        string Prenom;
        string Sexe;

    public:
        Contacts(int=0, string="" , string="" ,string="");
        ~Contacts();

        int GetIdentifiant() { return Identifiant; }

        void SetIdentifiant(int val) { Identifiant = val; }

        string GetNom() { return Nom; }

        void SetNom(string val) { Nom = val; }

        string GetPrenom() { return Prenom; }

        void SetPrenom(string val) { Prenom = val; }

        string GetSexe() { return Sexe; }

        void SetSexe(string val) { Sexe = val; }

        void affiche();

};

#endif // CONTACTS_H
