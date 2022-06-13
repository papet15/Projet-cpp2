#include "contacts.h"

Contacts::Contacts(int i, string n, string p, char s)
{
    this->SetIdentifiant(i);
    this->SetNom(n);
    this->SetPrenom(p);
    this->SetSexe(s);

}

Contacts::~Contacts()
{

}



void Contacts::affiche()
{
    cout << endl << "Identifiant : " << this->GetIdentifiant();
    cout << endl << "Nom : " << this->GetNom() ;
    cout << endl << "Prenom : " << this->GetPrenom() ;
    cout << endl << "Sexe : " << this->GetSexe()<< endl ;




}
