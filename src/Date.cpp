#include "Date.h"
#include <ctime>
#include <iostream>
#include <sstream>
using namespace std;


Date::Date(int j,int m,int a)
{

            this->jj=j;
            this->mm=m;
            this->aaaa=a;
}

Date::Date()
{
    time_t now=time(0);
     tm *ltm = localtime(&now);

            this->jj=ltm->tm_mday;
            this->mm=1+ltm->tm_mon;
            this->aaaa=1900 + ltm->tm_year;
}

Date::Date(const Date& d)
{

            this->jj=d.jj;
            this->mm=d.mm;
            this->aaaa=d.aaaa;
}

Date::~Date()
{
    delete this;
}

 int Date::getJour() const
 {
     return this->jj;
 }

 int Date::getMois() const
 {
     return this->mm;
 }

 int Date::getAnnee() const
 {

     return this->aaaa;
 }

 void Date::setJour(int j)
 {

     this->jj=j;
 }

 void Date::setMois(int m)
 {

     this->mm=m;
 }

 void Date::setAnnee(int a)
 {

      this->aaaa=a;

 }
 bool Date::ant(const Date& dt)
 {

    if(this->aaaa > dt.aaaa )
    {
        return true;
    }
    else if(this->aaaa == dt.aaaa && this->mm > dt.mm)
    {
        return true;
    }
    else if(this->aaaa == dt.aaaa && this->mm == dt.mm && this->jj > dt.jj)
    {
        return true;
    }
    else
    {
        return false;
    }

 }
 bool Date::post(const Date& dt)
 {
      if(this->aaaa < dt.aaaa )
    {
        return true;
    }
    else if(this->aaaa == dt.aaaa && this->mm < dt.mm)
    {
        return true;
    }
    else if(this->aaaa == dt.aaaa && this->mm == dt.mm && this->jj < dt.jj)
    {
        return true;
    }
    else
    {
        return false;
    }


 }
 bool Date::egal(const Date& dt)
 {
     if(this->aaaa == dt.aaaa && this->mm == dt.mm  && this->jj == dt.jj)
    {
       return true;
    }
    else
    {
        return false;
    }


 }

 string Date::toSring()
 {
     stringstream s;
     s<<this->jj<<" / "<<this->mm<<" / "<<this->aaaa;

    return s.str();

 }
