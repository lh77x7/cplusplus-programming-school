// vect3.cpp -- użycie funkcji STL
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Review {
    std::string title;
    int rating;
};

bool operator<(const Review & r1, const Review & r2);
bool worseThan(const Review & r1, const Review & r2);
bool FillReview(Review & rr);
void ShowReview(const Review & rr);

int main()
{

using namespace std;

vector<Review> books;
Review temp;
while (FillReview(temp))
    books.push_back(temp);
if(books.size() > 0)
{
    cout << "Dziekuje";
}
else
    cout << "Brak danych";
cout << "Koniec\n";

return 0;
}
