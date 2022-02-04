// assign_st.cpp -- przypisanie struktur
#include <iostream>
struct infatable
{
    char name[20];
    float volume;
    double price;
};

int main(){
    using namespace std;
    infatable bouquet = 
    {
        "sloneczniki",
        0.20,
        12.49
    };
    infatable choice;
    cout << "zmienna bouquet: " << bouquet.name << " za ";
    cout << bouquet.price << " zl " << endl;

    choice = bouquet;   // przypisanie jednej struktury do innej
    cout << "zmienna choice: " << choice.name << " za ";
    cout << choice.price << " zl " << endl;
    return 0;
}