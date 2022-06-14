#include "prives.h"

Prives::Prives(int i, string n, string p, char s, string dn, string na, string r, string c, string co, string v)
        :Contacts(i,n,p,s)
{
    this->SetNumero(na);
    this->SetRue(r);
    this->SetComplement(c);
    this->SetCodepostal(co);
    this->SetVille(v);
    this->SetDateNaissance(dn);
}

Prives::~Prives()
{
    cout << endl<< "Destruction de Prives"  << endl;
}

void Prives::affiche()
{
    Contacts::affiche();
    cout << "Adresse de l'entreprise : " << GetNumero() << ", " << GetRue() << " " << GetComplement() << " " << GetCodepostal() << " " << GetVille() << endl;
    cout << "Date Naissance : " << this->GetDateNaissance();



}
