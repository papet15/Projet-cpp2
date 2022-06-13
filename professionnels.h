#ifndef PROFESSIONNELS_H
#define PROFESSIONNELS_H


class Professionnels
{
    public:
        Professionnels();
        virtual ~Professionnels();

        string GetNomEntreprise[50]() { return NomEntreprise[50]; }
        void SetNomEntreprise[50](string val) { NomEntreprise[50] = val; }
        string GetAdresseEntreprise() { return AdresseEntreprise; }
        void SetAdresseEntreprise(string val) { AdresseEntreprise = val; }
        string GetMailEntreprise() { return MailEntreprise; }
        void SetMailEntreprise(string val) { MailEntreprise = val; }

    protected:

    private:
        string NomEntreprise[50];
        string AdresseEntreprise;
        string MailEntreprise;
};

#endif // PROFESSIONNELS_H
