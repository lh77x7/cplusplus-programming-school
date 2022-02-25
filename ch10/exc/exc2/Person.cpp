#include "Person.h"

Person::Person(const string & ln, const char * fn): lname(ln) { // #2 
    
    int i = 0;

    for(; i < LIMIT || '\0' != fn[i]; i++) // copy fn* do fname[LIMIT]
        fname[i] = fn[i];
    fn[i] == '\0' ? fname[i] == '\0' : fname[LIMIT] == '\0'; 
}

void Person::Show() const {
    cout << "\nlast name " << this->lname << ", first name " << this->fname << endl;
}

void Person::FormalShow() const {
    cout << "\nfirst name " << this->fname << ", last name " << this->lname << endl;
}