#include "professionnels.h"

Professionnels::Professionnels(int i, string n, string p, char s, string ne, string na, string r, string c, string co, string v, string me)
        :Contacts(i,n,p,s)
{
    this->SetNomEntreprise(ne);
    this->SetNumero(na);
    this->SetRue(r);
    this->SetComplement(c);
    this->SetCodepostal(co);
    this->SetVille(v);
    this->SetMailEntreprise(me);
}

Professionnels::~Professionnels()
{
    cout << endl << "Destruction de Professionnels : " << this->GetIdentifiant() << endl;

}


void Professionnels::affiche()
{
    Contacts::affiche();
    cout << "Nom Entreprise : " << this->GetNomEntreprise() << endl;
    cout << "Adresse de l'entreprise : " << GetNumero() << ", " << GetRue() << " " << GetComplement() << " " << GetCodepostal() << " " << GetVille() << endl;
    cout << "Mail Entreprise : " << this->GetMailEntreprise()<< endl;
}
