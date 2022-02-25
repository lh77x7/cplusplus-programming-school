#include "BankAccount.h"

int main()
{

    BankAccount *pAccountObj = new BankAccount("Lesz Hat", "123456", 1000000);
    std::string menu = "\nMenu: \n1 - account information \n2 - top up account \n3 - withdraw money\n0 - wyjdz\nEnter your choice: ";
    cout << menu;
    
    int choice;
    double howMuch = 0;

    while(cin >> choice and choice != 0) {
        switch(choice) {
            case 1:
                pAccountObj -> show();
                cout << menu;
                break;
            case 2:
                cout << "\nHow much do you deposit? ($)";
                cin >> howMuch;
                pAccountObj ->deposit(howMuch);
                cout << menu;
                break;
            case 3:
                cout << "\nHow much do you withdrawal? ($)";
                cin >> howMuch;
                pAccountObj ->withdraw(howMuch);
                cout << menu;
                break;
            default:
                cout << "\nWrong input\n";
                break;
        }

    }
    cout << "Do widzenia!\n";

    delete pAccountObj;
    pAccountObj = NULL;

    return 0;
}