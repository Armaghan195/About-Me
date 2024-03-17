#include <iostream>
#include <list>
using namespace std;

int main() {
    // Create a list of integers
    list<int> myList;

    // Add elements to the list
    myList.push_back(20);
    myList.push_back(30);
    myList.push_back(40);

    // Display the elements in the list
    cout << "Elements in the list:" << endl;
    for (int num : myList) {
        cout << num << " ";
    }
    cout << endl;

    // Insert an element at the beginning
    myList.push_front(10);

    // Display the elements after insertion
    cout << "Elements after insertion:" << endl;
    for (int num : myList) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}