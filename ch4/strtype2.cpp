// strtype2.cpp -- przypisanie, dodawanie i dolaczenie
#include <iostream>
#include <string> // string()
int main(){
    using namespace std;
    string s1 = "pingwin";
    string s2, s3;

    cout << "Jeden obiekt mozna przypisac innemu: s2 = s1\n";
    s2 = s1;
    cout << "s1: " << s1 << ", s2: "<< s2 << endl;
    cout << "Obiektowi mozna przypisac lanuch w konwencji C.\n";
    cout << "s2 = \"myszolow\"\n";
    s2 = "myszolow";
    
}