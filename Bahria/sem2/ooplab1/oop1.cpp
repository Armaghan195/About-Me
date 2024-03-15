#include<iostream>
#include<string>
using namespace std;

class Dog
{

    public:

     void bark()
      {
        cout << "Pet name: " << name << endl;
        cout << "Breed: " << breed << endl;
        cout << "age: " << age << endl;
        cout << name << " says Woof!" << endl << endl;
        }

       string name; string breed; int age;
};

class Person
{
   public:

    Person(string n = "", int a = 0) : name(n), age(a)
    {
      cout << "Person object created" << endl;
      }

    ~Person()
    {
        cout << "Person object destroyed" << endl <<endl;
      }
   void displayDetails()
   const {
        cout << "Name: " << name << ", Age: " << age << endl << endl;
    }


    Dog pet1;
    string name; int age;
};


int main()
{
    Person p1;

    p1.name = "Philp";
    p1.age  =  25;
    p1.pet1.name = "Leo";
    p1.pet1.breed = "Golden Retriver";
    p1.pet1.age = 4;

    p1.displayDetails();

    p1.pet1.bark();
}
