#include "Adresse.h"



Adresse::Adresse(int n,string vo,string a,string v)
{
    this->numero=n;
    this->voie=vo;
    this->arrondissement=a;
    this->ville=v;

}
Adresse::Adresse()
{
    this->numero=0;
    this->voie=" voie par defaut";
    this->arrondissement="arrondissement par defaut ";
    this->ville="ville par defaut ";

}
Adresse::Adresse(const Adresse& ad)
{
    this->numero=ad.numero;
    this->voie=ad.voie;
    this->arrondissement=ad.arrondissement;
    this->ville=ad.ville;

}

Adresse::~Adresse()
{
    delete this;
}

int Adresse::getNum() const
{

    return this->numero;
}

string Adresse::getVoie()const
 {
     return this->voie;
 }

string Adresse::getArro()const
{

    return this->arrondissement;
}
string Adresse::getVille()const
{

    return this->ville;
}

 void Adresse::setNum(int n)
 {
     this->numero=n;
 }
 void Adresse::setVoie(string vo)
 {

     this->voie=vo;
 }
 void Adresse::setArro(string a)
 {

     this->arrondissement=a;
 }
 void Adresse::setVille(string v)
 {

     this->ville=v;
 }
 bool Adresse::egal(const Adresse& ad)
 {

       if(this->arrondissement==ad.arrondissement && this->ville==ad.ville && this->numero==ad.numero && this->voie==ad.voie)
     {
      return true;

     }
      else
      {
          return false;

      }

 }
 bool Adresse::operator==(const Adresse& ad)
 {

       if(this->egal(ad))
     {
      return true;

     }
      else
      {
          return false;

      }

 }
