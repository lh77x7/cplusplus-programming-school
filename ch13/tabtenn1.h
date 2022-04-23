// tabtenn1.h -- klasa bazowa dla tenisisty stołowego
#ifndef TABTENN1_H_
#define TABTENN1_H_
#include <string>
using std::string;

// prosta klasa bazowa
class TableTennisPlayer
{
    private:
        string firstname;
        string lastname;
        bool hasTable;
    public:
        TableTennisPlayer(const string & fn = "brak", const string & ln = "brak", bool ht = false);
        void Name() const;
        bool HasTable() const { return hasTable; }
        void ResetTable(bool v) { hasTable = v; }
};

// podstawowa klasa pochodna
class RatedPlayer: public TableTennisPlayer
{
    private:
        unsigned int rating;
    public:
        RatedPlayer(unsigned int r = 0, const string & fn = "brak", const string & ln = "brak", bool ht = false);
        RatedPlayer(unsigned int r, const TableTennisPlayer & tp);
        unsigned int Rating() const { return rating; }
        void ResetRating (unsigned int r) { rating = r; } 
};

#endif