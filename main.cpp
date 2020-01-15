#include <iostream>
#include <Personne.h>
#include <Employe.h>
#include <Date.h>
#include <Adresse.h>
#include <Chef.h>
#include <string>

using namespace std;


int main()
{
Date d1;
Date d2(31,12,2019);
Date d3(1,12,2019);

Adresse ad;
Adresse ad1(ad);

Personne p1("p1","n1",d1,ad);

Personne p2("p2","n2",d2,ad);

Personne p3("p3","n3",d1,ad);
Personne p4("p4","n4",d1,ad);

//p4.afficher();

Employe e1("p5","n5",d1,ad,1500);
e1.afficher();

Chef c1("p5","n5",d1,ad,1500,"s1");
c1.afficher();


cout<<p1.getID()<<endl;
cout<<p2.getID()<<endl;
cout<<p3.getID()<<endl;
cout<<p4.getID()<<endl;

cout<<d2.toSring()<<endl;

 bool etat=true;
 cout<<" test etat si true :"<<etat<<"   si false :"<<!etat<<endl;

etat=d2.ant(d1);
cout<<etat<<endl;

etat=d2.egal(d1);
cout<<etat<<endl;
if(ad==ad1){
    cout<<"ad == ad1"<<endl;
}else{
     cout<<"ad != ad1"<<endl;
}

etat=d2.post(d1);
cout<<etat<<endl;

etat=d2.ant(d3);
cout<<etat<<endl;

etat=d3.ant(d2);
cout<<etat<<endl;

cout<<p1.getDateN().toSring()<<endl;
cout<<p1.getAdresse().getVille()<<endl;

    return 0;
}
