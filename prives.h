#ifndef PRIVES_H
#define PRIVES_H


class Prives
{
    public:
        Prives();
        ~Prives();

        string GetDateNaissance() { return DateNaissance; }
        void SetDateNaissance(string val) { DateNaissance = val; }
        string GetAdressePostale() { return AdressePostale; }
        void SetAdressePostale(string val) { AdressePostale = val; }


    private:
        string DateNaissance;
        string AdressePostale;
};

#endif // PRIVES_H
