// tabtenn1.cpp -- metody klasy bazowej
#include "tabtenn1.h"
#include <iostream>
TableTennisPlayer::TableTennisPlayer(const string & fn, const string & ln, bool ht): firstname(fn),
lastname(ln), hasTable(ht) {}

void TableTennisPlayer::Name() const
{
    std::cout << lastname << ", " << firstname;
}


// metody klasy RatedPlayer
RatedPlayer::RatedPlayer(unsigned int r, const string & fn,
const string & ln, bool ht) : TableTennisPlayer(fn, ln, ht)
{
    rating = r;
}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer & tp)
: TableTennisPlayer(tp), rating(r)
{
}