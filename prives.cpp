#include "prives.h"

Prives::Prives(int i, string n, string p, string s, string dn, string ap)
        :Contacts(i,n,p,s)
{
    this->SetAdressePostale(ap);
    this->SetDateNaissance(dn);
}

Prives::~Prives()
{
    cout << endl<< "Destruction de Prives"  << endl;
}

void Prives::affiche2()
{
    cout << endl << "Identifiant : " << this->GetIdentifiant();
    cout << endl << "Nom : " << this->GetNom() ;
    cout << endl << "Prenom : " << this->GetPrenom() ;
    cout << endl << "Sexe : " << this->GetSexe();
    cout << endl << "Adresse postale : " << this->GetAdressePostale() ;
    cout << endl << "Date Naissance : " << this->GetDateNaissance()<< endl;



}
