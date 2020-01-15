#include "Employe.h"
#include <iostream>
#include <string>

using namespace std;

Employe::Employe(string p,string n,const Date& dt,const Adresse& ad,float s):Personne(p,n,dt,ad)
{
    this->salaire=s;
}

Employe::Employe()
{
    Personne();
    this->salaire=0.0;
}

/*Employe::Employe(const Employe& e):Personne(e.prenom,e.nom,e.dateN,e.adresse)
{

    this->salaire=e.salaire;


}*/

Employe::~Employe()
{

}

void Employe::afficher()
{
    Personne::afficher();
    cout<<" SALAIRE : "<<this->salaire<<endl;



}
