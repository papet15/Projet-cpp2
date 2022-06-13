#include "professionnels.h"

Professionnels::Professionnels(int i, string n, string p, string s, string ne, string ae, string me)
        :Contacts(i,n,p,s)
{
    this->SetNomEntreprise(ne);
    this->SetAdresseEntreprise(ae);
    this->SetMailEntreprise(me);
}

Professionnels::~Professionnels()
{
    cout << endl << "Identifiant : " << this->GetIdentifiant();
    cout << endl << "Nom : " << this->GetNom() ;
    cout << endl << "Prenom : " << this->GetPrenom() ;
    cout << endl << "Sexe : " << this->GetSexe();
    cout << endl << "Adresse postale : " << this->GetNomEntreprise() ;
    cout << endl << "Adresse postale : " << this->GetAdresseEntreprise() ;
    cout << endl << "Date Naissance : " << this->GetMailEntreprise()<< endl;
}
