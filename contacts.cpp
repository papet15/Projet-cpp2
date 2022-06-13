#include "contacts.h"

Contacts::Contacts(int i, string n, string p, string s)
{
    this->SetIdentifiant(i);
    this->SetNom(n);
    this->SetNom(p);
    this->SetSexe(s);

}

Contacts::~Contacts()
{
    cout << "Destruction de Contacts : " << this->GetIdentifiant() << endl;
}



void Contacts::affiche()
{
    cout << endl << "Identifiant : " << this->GetIdentifiant();
    cout << endl << "Nom : " << this->GetNom() ;
    cout << endl << "Prenom : " << this->GetPrenom() ;
    cout << endl << "Sexe : " << this->GetSexe()<< endl ;




}
