#include <list>
#include <iostream>

using namespace std;

void printList(const list<int>& lst)
 {
    for (int n : lst)
     cout << n << " ";

    cout << endl;
}


bool customCompare(int a, int b)
 {

    return a > b;
}

int main()
 {
    list<int> myList = {1, 2, 3, 4, 5};
    myList.push_back(0);
    myList.push_front(6);

    cout << "intial List: " <<endl;
    printList(myList);

    cout << "Sorting the list in ascending order:" << endl;
    myList.sort();
    printList(myList);


    cout << "Sorting the list in descending order:" << endl;
    myList.sort(customCompare);
    printList(myList);


    list<int> otherList = {7, 8, 9};
    cout << "Merging otherlist with the intial list" << endl;
    myList.sort();
    myList.merge(otherList);
    printList(myList);

    return 0;
}
