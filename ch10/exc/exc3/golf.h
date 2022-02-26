#include <iostream>
#include <cstring>

class Golf
{
    private:
        static const int Len = 40;
        int Handicap;
    public:
        char fullname[Len];
        inline int GetLen() { return Len; }
        void setgolf(const char * name, int hc);
        int setgolf();
        void handicap(int hc);
        void showgolf();
};

