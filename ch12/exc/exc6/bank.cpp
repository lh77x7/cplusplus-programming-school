// bank.cpp -- użycie kolejki, ćwiczenie 5 rozdział 12
// skompiluj z queue.cpp
#include <iostream>
#include <cstdlib> // rand(), srand()
#include <ctime>   // time()
#include "queue.h"
const int MIN_PER_HR = 60;

bool newcustomer(double x); // czy dotarł już następny klient?

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::ios_base;
	// przygotowanie symulacji
    std::srand(std::time(0));   // inicjalizacja generatora liczb losowych

	cout << "Studium przypadku: bankomat Banku Stu Kas\n";
    cout << "Podaj maksymalna dlugosci kolejki: ";
	int qs;
	cin >> qs;

	cout << "Podaj symulowany czas (w godzinach): ";
	int hours;              // liczba godzin symulacji
	cin >> hours;
	// symulacja z jednominutową rozdzielczością
    long cyclelimit = MIN_PER_HR * hours;   // liczba cykli


	cout << "Podaj srednia liczbe klientow na godzine: ";
	double perhour = 1;         // średnia liczba nowych klientów na godzinę
	double average_wait_time = 0; // średni czas czekania na godzinę
	for (; true; ++perhour) {
		Queue line(qs), line2(qs);         
		//cin >> perhour;
		double min_per_cust;    // średni odstęp czasowy między klientami
		min_per_cust = MIN_PER_HR / perhour;

		Item temp;              // dane nowego klienta w kolejce 1
		Item temp2;             // dane nowego klienta w kolejce 2
		long turnaways = 0;     // liczba klientów odesłanych z kolejki
		long customers = 0;     // liczba klientów przyjętych do kolejki
		long served = 0;        // liczba klientów obsłużonych w symulacji
		long sum_line = 0;      // łączna liczba oczekujących
		int wait_time = 0;      // czas czekania na kolejkę 1
		int wait_time2 = 0;     // czas czekania na kolejkę 2
		long line_wait = 0;     // łączny czas oczekiwania

		// rozpoczęcie symulacji
		Queue* pLineNow = nullptr; // wskaźnik do mniejszej kolejki
		Item* pTempNow = nullptr; // wskaźnik do nowego użytkownika z mniejszej kolejki 

		for (int cycle = 0; cycle < cyclelimit; cycle++)
		{
			if (line.queuecount() < line2.queuecount()) { // która kolejka jest mniejsza?
				pLineNow = &line; // wybór kolejki w obecnej minucie
				pTempNow = &temp; // wybór nowego użytkownika dla obecnej kolejki
			}
			else {
				pLineNow = &line2;
				pTempNow = &temp2;
			}

			if (newcustomer(min_per_cust))  // mamy nowego chętnego
			{
				if (line.isfull() and line2.isfull())
					turnaways++;
				else
				{
					customers++;
					pTempNow->set(cycle);    // czas przybycia = nr cyklu
					pLineNow->enqueue(*pTempNow);
				}
			}
			
			if (wait_time <= 0 && !line.isempty()) // zmiana na kolejke 1 w minucie
			{
				line.dequeue(temp);      // następny do obsłużenia
				wait_time = temp.ptime(); // dołączenie klienta do kolejki
				line_wait += cycle - temp.when();
				served++;
			}
			if (wait_time > 0)
				wait_time--;

			if (wait_time2 <= 0 && !line2.isempty()) // zmiana na kolejke 2 w minucie
			{
				line2.dequeue(temp2);      // następny do obsłużenia
				wait_time2 = temp2.ptime(); // dołączenie klienta do kolejki
				line_wait += cycle - temp2.when();
				served++;
			}
			if (wait_time2 > 0)
				wait_time2--;

			sum_line += line.queuecount() + line2.queuecount();
		}

		average_wait_time = (double)line_wait / served;
		if (0.99 < average_wait_time and 1.99 > average_wait_time) { 
			cout << "Koniec!\n" << 
                "Srednia liczba klientow na godzine, ktora prowadzi do sredniego czasu czekania na minute: " << perhour
                << " osob.\n";
                break;
		}
		else 
			cout << "\n" << perhour << " klientow na godzine, czas czekania: " << average_wait_time << " minut\n";
	} 

	cin.get();
	cin.get();
	return 0;
}

/*

x = średni odstęp czasowy (w minutach) pomiędzy potencjalnymi klientami
jeśli wartość zwraca to true, w danej minucie pojawił się klient

*/
bool newcustomer(double x)
{
	return (std::rand() * x / RAND_MAX < 1);
}
