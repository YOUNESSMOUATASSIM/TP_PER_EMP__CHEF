#ifndef PERSONNE_H
#define PERSONNE_H
#include <Date.h>
#include <Adresse.h>
#include <string>
using namespace std;

class Personne
{
    protected:
        static int id;
    int ID;
    string nom,prenom;
    Date* dateN;
    Adresse* adresse;

    public:
        Personne(string p,string n,const Date& dt,const Adresse& ad);
        Personne(const Personne& p);
        Personne();
        ~Personne();

int getID() const;
string getNom() const;
string getPrenom() const;
Date& getDateN()const;
Adresse& getAdresse()const;

void setNom(string n);
void setPrenom(string p);
void setDateN(Date& dt);
void setAdresse(Adresse& ad);
virtual void  afficher();


};

#endif // PERSONNE_H
