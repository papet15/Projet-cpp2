#ifndef PRIVES_H
#define PRIVES_H

#include "contacts.h"

class Prives : public Contacts
{
    public:
        Prives(int=0, string="", string="",string="", string="",string="");
        ~Prives();

        string GetDateNaissance() { return DateNaissance; }
        void SetDateNaissance(string val) { DateNaissance = val; }
        string GetAdressePostale() { return AdressePostale; }
        void SetAdressePostale(string val) { AdressePostale = val; }

        void affiche2();


    private:
        string DateNaissance;
        string AdressePostale;
};

#endif // PRIVES_H
