#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <string>
#include "Personne.h"

using namespace std;

class Employe : public Personne
{
    protected:
      float salaire;
    public:
        Employe(string p,string n,const Date& dt,const Adresse& ad,float s);
        Employe(const Employe& e);
        Employe();
        ~Employe();

     void afficher();


};

#endif // EMPLOYE_H
