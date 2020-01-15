#include "Personne.h"
#include <iostream>
using namespace std;
int Personne::id=0;

Personne::Personne(string p, string n,const Date& dt,const Adresse& ad)
{ id++;
    this->ID=id;
this->prenom=p;
this->nom=n;
this->dateN=(Date*)&dt;
this->adresse=(Adresse*)&ad;



}
Personne::Personne()
{ id++;
   this->ID=id;

   this->prenom="defaut firstname";
   this->nom="defaut name";

  this->dateN=new Date();

  this->adresse=new Adresse();
}
Personne::Personne(const Personne& p)
{ id++;
   this->ID=id;

   this->prenom=p.prenom;

   this->nom=p.nom;

  this->dateN=p.dateN;

  this->adresse=p.adresse;
}

Personne::~Personne()
{
     id--;

    delete dateN;

    delete adresse;



}

int Personne::getID() const
{
   return this->ID;

}
string Personne::getNom() const
{
    return this->nom;
}
string Personne::getPrenom() const
{
    return this->prenom;
}
Date& Personne::getDateN()const
{

    return *this->dateN;
}
Adresse& Personne::getAdresse()const
{


    return *this->adresse;
}

void Personne::setNom(string n)
{
this->nom=n;

}
void Personne::setPrenom(string p)
{
this->prenom=p;

}
void Personne::setDateN(Date& dt)
{
    this->dateN=&dt;


}
void Personne::setAdresse(Adresse& ad)
{


    this->adresse=&ad;
}
 void Personne::afficher()
{

    cout<<"ID :"<<this->ID<<"  PRENOM :"<<this->prenom<<"  NOM :"<<this->nom<<" DATE DE NAISSANCE :"<<this->dateN->toSring()<<" ADRESSE :"<<this->adresse->getArro()<<" "<<this->adresse->getVille()<<" "<<this->adresse->getVoie()<<" "<<this->adresse->getNum();


}
