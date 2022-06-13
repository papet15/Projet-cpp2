#ifndef PROFESSIONNELS_H
#define PROFESSIONNELS_H
#include "MonException.h"

#include "contacts.h"


class Professionnels : public Contacts
{
    public:
        Professionnels(int=0, string="", string="",char='O',string="",string="",string="");
        virtual ~Professionnels();

        string GetNomEntreprise() { return NomEntreprise; }
        void SetNomEntreprise(string val)
        {
            if (val.length() <= 50)
            {
            transform(val.begin(), val.end(),val.begin(), ::toupper);
            NomEntreprise=val;
            }else throw MonException(Erreurs::ERR_NOMENTREPRISE);
        }
        string GetAdresseEntreprise() { return AdresseEntreprise; }
        void SetAdresseEntreprise(string val) { AdresseEntreprise = val; }
        string GetMailEntreprise() { return MailEntreprise; }
        void SetMailEntreprise(string val) { MailEntreprise = val; }

        void affiche();

    protected:

    private:
        string NomEntreprise;
        string AdresseEntreprise;
        string MailEntreprise;
};

#endif // PROFESSIONNELS_H
