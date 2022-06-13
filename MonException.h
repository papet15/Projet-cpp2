#ifndef MONEXCEPTION_H_INCLUDED
#define MONEXCEPTION_H_INCLUDED
#include <iostream>
#include <stdexcept>

using namespace std;

enum class Erreurs {ERR_NOMENTREPRISE, ERR_NOM, ERR_PRE, ERR_SEXE, ERR_AUTRES};

class MonException: exception
{
    private:
        Erreurs codeErreur;
        mutable string message;

    public:
        MonException(Erreurs) throw();
        virtual ~MonException() throw();

        const char * what() const throw() override;

        string Getmessage() const;

};
#endif // MONEXCEPTION_H_INCLUDED
