// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>

class Stonewt
{
    public:
        enum Type { KAMIENIE, FUNTY, FUNTYULAMEK };
    private:
        enum { Lbs_per_stn = 14 };
        int kamienie;
        double funty;
        double ulamekfunta;
        Type interface;
    public:
        Stonewt(double lfun, Type = FUNTY);
        Stonewt(double lfun, int lkam, Type = KAMIENIE);
        Stonewt();
        ~Stonewt();
        friend std::ostream & operator<< (std::ostream & os, Stonewt &);
        Stonewt operator+(Stonewt &);
        Stonewt operator-(Stonewt &);
        Stonewt operator*(Stonewt &);
};

#endif