#include "professionnels.h"

Professionnels::Professionnels(int i, string n, string p, char s, string ne, string ae, string me)
        :Contacts(i,n,p,s)
{
    this->SetNomEntreprise(ne);
    this->SetAdresseEntreprise(ae);
    this->SetMailEntreprise(me);
}

Professionnels::~Professionnels()
{
    cout << endl << "Destruction de Professionnels : " << this->GetIdentifiant() << endl;

}


void Professionnels::affiche()
{
    Contacts::affiche();
    cout << "Nom Entreprise : " << this->GetNomEntreprise() ;
    cout << endl << "Adresse Entreprise : " << this->GetAdresseEntreprise() ;
    cout << endl << "Mail Entreprise : " << this->GetMailEntreprise()<< endl;
}
