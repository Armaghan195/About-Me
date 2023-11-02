#include<iostream>

using namespace std;

int main()
{
    int borrow, returnn, Fine, total, option;

    string book;

    cout << "Welcome to Bibliotheca Library" << endl;
    cout << "Menu \n1) Issue book \n2) Return book \n3) Quit" << endl;
    cout << "Enter Your choice= ";
    cin >> option;
    switch (option)
    {
    case 1:
    {
        cout << "\nName of book: ";
        cin >> book;
        cout << "\nToday's date: ";
        cin >> borrow;
        cout << "\nReturn date: ";
        cin >> returnn;

        total = returnn - borrow;
        cout << "total days of keeping book will be " << total <<endl;
        cout<<"\nThank you";
        break;
    }
    case 2:
    {
        cout << "Name of book: ";
        cin >> book;
        cout << "\nBorrowed date: ";
        cin >> borrow;
        cout << "\nToday date: ";
        cin >> returnn;

        total = returnn - borrow;
        cout << "total days = " << total;
        if (total > 5)
        {
            Fine = 0 + (total - 5);
        cout << "\nFine= " << Fine << "$" <<endl;
        }
        else
        {
            cout<<"\nThank you";
        }
        break;
    }
    case  3:
    {
        cout<<"Thank you for visiting";
        break;
    }
    default:
    {
        cout<<"wrong input";
        break;
    }
    }
    return 195;

}
