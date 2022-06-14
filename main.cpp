#include <iostream>
#include "contacts.h"
#include "prives.h"
#include "professionnels.h"
#include "MonException.h"

using namespace std;

int main()
{
    cout << "Nom minuscules, prenom avec majuscule mal placee : "<<endl ;
    try
    {
        Contacts p = Contacts(10,"Laurent","daNielle",'F');
        p.affiche();

    }
    catch(const MonException& ex)
    {
        cout << ex.what() << endl;
    }


    cout << "Nom trop long : "<<endl ;
    try
    {
        Contacts p = Contacts(10,"Laurentttttttttttttttttttttttttttttttttttttttttttttttttttttttt","Danielle",'F');
        p.affiche();
    }
    catch(const MonException& ex)
    {
        cout << ex.what() << endl;
    }
    cout << "Prenom trop long : "<<endl;
    try
    {
        Contacts p = Contacts(10,"LAURENT","dAnielleeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee",'F');
        p.affiche();
    }
    catch(const MonException& ex)
    {
        cout << ex.what() << endl;
    }
    cout << "Sexe different de F ou M : "<<endl;
    try
    {
        Contacts p = Contacts(10,"LAURENT","Danielle",'Z');
        p.affiche();
    }
    catch(const MonException& ex)
    {
        cout << ex.what() << endl;
    }

    cout << "Nom entreprise trop long sans majuscules : "<<endl;
    try
    {
        Professionnels p = Professionnels(15, "Ducobu", "Bertrand", 'M', "Zaraaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "123", "rue des oliviers", "etage 2", "75000", "Paris", "test@hotmail.fr");
        p.affiche();
    }
    catch(const MonException& ex)
    {
        cout << ex.what() << endl;
    }


    cout << "Nom entreprise sans majuscules : "<<endl;
    try
    {
        Professionnels p = Professionnels(15, "Ducobu", "Bertrand", 'M', "zara", "123", "rue des oliviers", "etage 2", "75000", "Paris", "test@hotmail.fr");
        p.affiche();
    }
    catch(const MonException& ex)
    {
        cout << ex.what() << endl;
    }

    cout << "Email sans @ "<<endl;
    try
    {
        Professionnels p = Professionnels(15, "Ducobu", "Bertrand", 'M', "zara", "123", "rue des oliviers", "etage 2", "75000", "Paris", "testhotmail.fr");
        p.affiche();
    }
    catch(const MonException& ex)
    {
        cout << ex.what() << endl;
    }

     cout << "Test prives"<<endl;
    try
    {
        Prives p = Prives(6, "BERRIS", "Karine", 'F', "125", "rue de LaFayette", "digicode 1234", "94000", "Creteil", "01/01/1970");
        p.affiche();
    }
    catch(const MonException& ex)
    {
        cout << ex.what() << endl;
    }




    return 0;



}
