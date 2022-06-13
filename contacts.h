#ifndef CONTACTS_H
#define CONTACTS_H


class Contacts
{

    private:
        int Identifiant;
        string Nom[30];
        string Prenom[30];
        char Sexe;

    public:
        Contacts();
        ~Contacts();

        int GetIdentifiant() { return Identifiant; }

        void SetIdentifiant(int val) { Identifiant = val; }

        string GetNom[30]() { return Nom[30]; }

        void SetNom[30](string val) { Nom[30] = val; }

        string GetPrenom[30]() { return Prenom[30]; }

        void SetPrenom[30](string val) { Prenom[30] = val; }

        char GetSexe() { return Sexe; }

        void SetSexe(char val) { Sexe = val; }

};

#endif // CONTACTS_H
