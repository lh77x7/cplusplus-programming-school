// usett1.cpp -- korzystanie z klasy bazowej oraz klasy pochodnej
#include <iostream>
#include "tabtenn1.h"

int main(void)
{
    using std::cout;
    using std::endl;
    TableTennisPlayer player1("Terasa", "Bogatko", false);
    RatedPlayer rplayer1(1140, "Natalia", "Sklarek", true);
    rplayer1.Name();    // obiekt klasy pochodnej korzysta z metody klasy bazowej
    if(rplayer1.HasTable())
        cout << ": posiada stol.\n";
    else
        cout << ": nie posiada stolu.\n";
    player1.Name(); // obiekt klasy bazowej korzysta z metody klasy bazowej
    if(player1.HasTable())
        cout << ": posiada stol.\n";
    else
        cout << ": nie posiada stolu.\n";
    cout << "Nazwisko i imie: ";
    rplayer1.Name();
    cout << "; Ranking: " << rplayer1.Rating() << endl;
    // inicjalizacja obiektu klasy RatedPlayer obiektem klasy TableTennisPlayer
    RatedPlayer rplayer2(1212, player1);
    cout << "Nazwisko i imie: ";
    rplayer2.Name();
    cout << "; Ranking: " << rplayer2.Rating() << endl;
    
    return 0;
}