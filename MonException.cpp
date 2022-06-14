#include "MonException.h"

MonException::MonException(Erreurs e) throw()
{
    this->codeErreur = e;
}

MonException::~MonException() throw()
{
    cout << "Destruction Erreur " <<endl <<endl;
}

const char* MonException::what() const throw()
{
    this->Getmessage();
    return message.c_str();
}

string MonException::Getmessage() const
{
    switch (this->codeErreur)
    {
        case Erreurs::ERR_NOMENTREPRISE:
            message = "Err longueur nom entreprise";
            break;
        case Erreurs::ERR_MAIL:
            message = "Err @ mail";
            break;
        case Erreurs::ERR_NOM:
            message = "Err longueur nom";
            break;
        case Erreurs::ERR_PRE:
            message = "Err longueur prenom";
            break;
        case Erreurs::ERR_SEXE:
            message = "Err Sexe";
            break;
        default:
            message = "Autre Err";
            break;
    }
    return this->message;
}
