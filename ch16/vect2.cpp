// vect2.cpp -- metody i iteratory klasy vector
#include <iostream>
#include <string>
#include <vector>
struct Review{
    std::string title;
    int rating;
};
bool FillReview(Review & rr);
void ShowReview(const Review & rr);
int main()
{
    using std::cout;
    using std::vector;
    vector<Review> books;
    Review temp;
    while(FillReview(temp))
        books.push_back(temp);
    int num = books.size();
    if(num > 0)
    {
        cout << "Dziekuje. Wpisales nastepne dane:\n"
            << "Ocena\tKsiazka\n";
        for(int i = 0; i < num; i++)
            ShowReview(books[i]);
        cout << " Przypomnienie ocen:\n"
            << "Ocena\tKsiazka\n";
        vector<Review>::iterator pr;
        for(pr = books.begin(); pr != books.end(); pr++)
            ShowReview(*pr);
        vector<Review> oldlist(books);  // używany konstruktor kopiujący
        if(num > 3)
        {
            // usuwa 2 elementy
            books.erase(books.begin() + 1, books.begin() + 3);
            cout << "Po przesunieciu:\n";
            for(pr = books.begin(); pr != books.end(); pr++)
                ShowReview(*pr);
            // wstawia 1 element
            books.insert(books.begin(), oldlist.begin() + 1, oldlist.begin() + 2);
            cout << "Po wstawieniu:\n";
            for(pr = books.begin(); pr != books.end(); pr++)
                ShowReview(*pr);
        }
        books.swap(oldlist);
        cout << "Zmiana wartosci wektorow oldlist i books:\n";
        for(pr = books.begin(); pr != books.end(); pr++)
            ShowReview(*pr);
    }
    else
        cout << "Bez wpisywania nie ma wyswietlania.\n";

    return 0;
}

bool FillReview(Review & rr)
{
    std::cout << "Wpisz tytul ksiazki (koniec, aby zakonczyc)";
    std::getline(std::cin, rr.title);
    if(rr.title == "koniec")
        return false;
    std::cout << "Wspisz ocene: ";
    std::cin >> rr.rating;
    if(!std::cin)
        return false;
    // pozbycie sie reszty danych wejściowych
    while(std::cin.get() != '\n')
        continue;
    return true;
}

void ShowReview(const Review & rr)
{
    std::cout << rr.rating << "\t" << rr.title << std::endl;
}