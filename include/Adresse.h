#ifndef ADRESSE_H
#define ADRESSE_H
#include <string>
using namespace std;

class Adresse
{
    private:
    int numero;
    string voie,arrondissement,ville;


    public:
        Adresse(int n,string vo,string a,string v);
        Adresse(const Adresse& ad);
        Adresse();
        ~Adresse();


int getNum() const;
string getVoie() const;
string getArro() const;
string getVille() const;

 void setNum(int n);
 void setVoie(string vo);
 void setArro(string a);
 void setVille(string v);
 bool egal(const Adresse& ad);
 bool operator==(const Adresse& ad);




};

#endif // ADRESSE_H
