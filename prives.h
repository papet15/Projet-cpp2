#ifndef PRIVES_H
#define PRIVES_H
#include "MonException.h"
#include "contacts.h"

class Prives : public Contacts
{
    public:
        Prives(int=0, string="", string="",char='O', string="",string="", string="", string="", string="", string="");
        ~Prives();

        string GetDateNaissance() { return DateNaissance; }
        void SetDateNaissance(string val) { DateNaissance = val; }



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


    private:
        string DateNaissance;
        string Numero;
        string Rue;
        string Complement;
        string Codepostal;
        string Ville;

};

#endif // PRIVES_H
