#include "prives.h"

Prives::Prives(int i, string n, string p, char s, string dn, string ap)
        :Contacts(i,n,p,s)
{
    this->SetAdressePostale(ap);
    this->SetDateNaissance(dn);
}

Prives::~Prives()
{
    cout << endl<< "Destruction de Prives"  << endl;
}

void Prives::affiche()
{
    Contacts::affiche();
    cout << endl << "Adresse postale : " << this->GetAdressePostale() ;
    cout << endl << "Date Naissance : " << this->GetDateNaissance()<< endl;



}
