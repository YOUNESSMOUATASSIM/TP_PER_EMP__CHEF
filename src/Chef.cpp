#include "Chef.h"
#include <iostream>
#include <string>

using namespace std;

Chef::Chef(string p,string n,const Date& dt,const Adresse& ad,float s,string srv):Employe(p,n,dt,ad,s)
{
    this->service=srv;
}

/*Chef::Chef(const Chef& c) :Employe(c.prenom,c.nom,c.dateN,c.adresse,c.salaire)
{

    this->service;

}*/

Chef::Chef()
{
    Employe();
    this->service="service par defaut";
}
Chef::~Chef()
{
    //dtor
}


void Chef::afficher()
{
    Employe::afficher();
    cout<<" SERVICE : "<<this->service<<endl;


}
