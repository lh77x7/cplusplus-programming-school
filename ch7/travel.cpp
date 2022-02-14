// travel.cpp -- struktury i funkcje
#include <iostream>
// deklaracje
struct travel_time
{
    int hours;
    int mins;
};

const int Mins_per_hr = 60;

// prototypy
travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);

int main(){

    using namespace std;
    travel_time day1 = {5, 45}; // 5h 45 min.
    travel_time day2 = {4, 55}; // 4h 55 min.

    travel_time trip = sum(day1, day2);
    cout << "Suma dwoch dni: ";
    show_time(trip);

    travel_time day3 = {4, 32}; // 4h 32 min.
    cout << "Suma trzech dni: ";
    show_time(sum(trip, day3));

    return 0;
}

travel_time sum(travel_time t1, travel_time t2)
{

    travel_time total;

    total.mins = (t1.mins + t2.mins) % Mins_per_hr;
    total.hours = t1.hours + t2.hours + (t1.mins + t2.mins) / Mins_per_hr;

    return total;
}

void show_time(travel_time t)
{

    using namespace std;

    cout << t.hours << " godzin, "
        << t.mins << " minut\n";
}