#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Dog
{

    public:
     string name; string breed; int age;

     Dog(string n = "", string b = "", int a = 0) : name(n), breed(b), age(a) {}

     void bark()
      {
        cout <<"-----------------------------------" << endl;
        cout << "Pet name: " << name << endl;
        cout << "Breed: " << breed << endl;
        cout << "age: " << age << endl;
        cout << name << " says Woof!" << endl << endl;
        cout <<"-----------------------------------" << endl;
        }

};

class Person
{
   public:
    string name; int age; vector <Dog> pet;

    Person(string n = "", int a = 0) : name(n), age(a) {}

   void displayDetails()
  {
    cout <<"-----------------------------------" << endl;
    cout << "Name: " << name << ", Age: " << age << endl << endl;
    if (!pet.empty())
    {
      for(Dog& d : pet) // Remove const qualifier from the range-based for loop variable declaration
      {
        d.bark(); 
      }
    }
    cout <<"-----------------------------------" << endl;

    cout << endl;

  }
};

class house
{
    public:
      int houseno; string address;
      vector <Person> people;

      void setuphouse()
      {
        int nop;
        cout << "Enter no of people in the house: ";
        cin >> nop;
        people.resize(nop);

      }


      void peopledetailinput()
      {
        for(int i = 0; i < people.size(); i++)
        {
          char ch;

            cout << "Enter "<< i+1 << "th Person's Detail: " << endl;
            cout << "Name: ";
            cin >> people[i].name;
            cout << "Age: ";
            cin >> people[i].age;
            cout << "Does this Person has Pet? (y/n):  ";
            cin >> ch;
            if (ch == 'y')
            {
              string petName, petBreed;
                int petAge;
                cout << "Enter pet's name: ";
                cin >> petName;
                cout << "Enter pet's breed: ";
                cin >> petBreed;
                cout << "Enter pet's age: ";
                cin >> petAge;
                people[i].pet.emplace_back(petName, petBreed, petAge);
            }
        }
      }
      void peopledetailoutput()
      {
        for (auto& person : people)
        {
          person.displayDetails();
        }
      }
};


int main()
{
    house h1;

    cout << "Enter House No: ";
    cin >> h1.houseno;
    cout << "Enter House Address: ";
    cin >> h1.address;
    cin.ignore();

    h1.setuphouse();
    h1.peopledetailinput();
    h1.peopledetailoutput();



}
