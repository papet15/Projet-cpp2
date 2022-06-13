#ifndef PROFESSIONNELS_H
#define PROFESSIONNELS_H


#include "contacts.h"


class Professionnels : public Contacts
{
    public:
        Professionnels(int=0, string="", string="",string="",string="",string="",string="");
        virtual ~Professionnels();

        string GetNomEntreprise() { return NomEntreprise; }
        void SetNomEntreprise(string val) { NomEntreprise = val; }
        string GetAdresseEntreprise() { return AdresseEntreprise; }
        void SetAdresseEntreprise(string val) { AdresseEntreprise = val; }
        string GetMailEntreprise() { return MailEntreprise; }
        void SetMailEntreprise(string val) { MailEntreprise = val; }

    protected:

    private:
        string NomEntreprise;
        string AdresseEntreprise;
        string MailEntreprise;
};

#endif // PROFESSIONNELS_H
