#ifndef CHEF_H
#define CHEF_H
#include <string>
#include "Employe.h"

using namespace std;

class Chef : public Employe
{
     private:
         string service;
    public:
        Chef(string p,string n,const Date& dt,const Adresse& ad,float s,string srv);
        Chef(const Chef& c);
        Chef();
        ~Chef();

    void afficher();


};

#endif // CHEF_H
