#include <iostream>
#include <string>


using namespace std;

class Person
{
   public:
   Person(string n, int a): name(n), age(a)
   {
    cout << "object created" << endl;
    }

   ~Person()
    {
     cout << "object destroyed" << endl << endl;
    }

    void displayDetails()
    {
        cout << "Name: " << name << " Age: " << age << endl;
    }

    string name;
    int age;
};

class House
{
    public:
        class Person
        {
            public:
                Person(string n, int a): name(n), age(a)
                {
                    cout << "object created" << endl;
                }

                ~Person()
                {
                    cout << "object destroyed" << endl << endl;
                }

                void displayDetails()
                {
                    cout << "Name: " << name << " Age: " << age << endl;
                }

                string name;
                int age;
        };

        Person person1;
        Person person2;
        Person person3;
        Person person4;
};

int main()
{
    House::Person person1("John", 25);
    person1.displayDetails();

    return 0;
}

