const int DLUGOSC_MAX = 300;
const int STOS_PELNY = 3;
const int STOS_PUSTY = 2;
const int OK = 1;
template <class TypPodst> class STOS
{
    TypPodst t[DLUGOSC_MAX];
    int szczyt;                     // szczyt = pierwsza WOLNA komórka
    public:
    STOS() { szczyt = 0; }          // konstruktor
    void clear() { szczyt = 0; }    // zerowanie stosu
    int push(TypPodst x);
    int pop(TypPodst &w);
    int StanStosu();
};  // koniec definicji klasy Stosu