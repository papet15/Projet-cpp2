#ifndef PROFESSIONNELS_H
#define PROFESSIONNELS_H
#include "MonException.h"

#include "contacts.h"


class Professionnels : public Contacts
{
    public:
        Professionnels(int=0, string="", string="",char='O',string="",string="", string="", string="", string="", string="",string="");
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

        string GetMailEntreprise() { return MailEntreprise; }

        void SetMailEntreprise(string val)
        {
            string val2 = val;
            string verif_mail = "@";
            if (val.find(verif_mail) != std::string::npos)
                {
                val.replace(val.find("@"), verif_mail.length(), "test");
                if (val.find(verif_mail) == std::string::npos)
                {
                MailEntreprise = val2;
                }else
            throw MonException(Erreurs::ERR_MAIL);
            }else
            throw MonException(Erreurs::ERR_MAIL);
        }



        string GetNumero() { return Numero; }
        void SetNumero(string val) { Numero = val; }

         string GetRue() { return Rue; }
        void SetRue(string val) { Rue = val; }

         string GetComplement() { return Complement; }
        void SetComplement(string val) { Complement = val; }

         string GetCodepostal() { return Codepostal; }
        void SetCodepostal(string val) { Codepostal = val; }

         string GetVille() { return Ville; }
        void SetVille(string val) { Ville = val; }



        void affiche();

    protected:

    private:
        string NomEntreprise;
        string Numero;
        string Rue;
        string Complement;
        string Codepostal;
        string Ville;
        string MailEntreprise;
};

#endif // PROFESSIONNELS_H
