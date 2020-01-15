#ifndef DATE_H
#define DATE_H
#include <string>
using namespace std;

class Date
{
    private:
        int jj,mm,aaaa;

    public:
        Date(int j,int m,int a);
        Date(const Date& d);
        Date();
        ~Date();

 int getJour()const;

 int getMois()const;
 int getAnnee()const;

 void setJour(int j);

 void setMois(int m);

 void setAnnee(int a);
 bool ant(const Date& dt);
 bool post(const Date& dt);
 bool egal(const Date& dt);

 string toSring();



};

#endif // DATE_H
