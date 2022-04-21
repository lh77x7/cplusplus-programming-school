// tabtenn0.h -- klasa bazowa tenisisty
#ifndef TABTENNO_H_
#define TABTENNO_H
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
        TableTennisPlayer(const string & fn = "brak", 
                        const string & ln = "brak", bool ht = false);
        void Name() const;
        bool HasTable() const { return hasTable; }
        void ResetTable(bool v) { hasTable = v; }
};

#endif
