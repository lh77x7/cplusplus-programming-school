// stonewt.h -- definiowanie klasy Stonewt
#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt
{
private:
    enum {Lbs_per_stn = 14};        // liczba funtów na kamień
    int stone;                      // masa w całych kamieniach
    double pds_left;                // reszta w funtach
    double pounds;                  // masa w funtach
public:
    Stonewt(double lbs);            // konstruktor dla funtów
    Stonewt(int stn, double lbs);   // konstruktor dla kamieni i funtów
    Stonewt();                      // konstruktr domyślny
    ~Stonewt();                     
    void show_lbs() const;          // wyświetla masę w funtach
    void show_stn() const;          // wyświetla masę w kamieniach
};
#endif