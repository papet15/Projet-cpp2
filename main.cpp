#include <iostream>
#include "contacts.h"
#include "prives.h"
#include "professionnels.h"

using namespace std;

int main()
{
    Contacts c(1000, "TOTO", "Tata", "F");
    c.affiche();


    Prives p(500, "DUPONT", "Remi", "M", "01/01/1990", "75015");
    p.affiche2();

    Professionnels p2(1000, "ALPHA", "Beta", "F", "Zara", "rue des olivers", "test@hotmail.fr");
    p2.affiche();

}
