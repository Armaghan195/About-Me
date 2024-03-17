#include <iostream>
#include <list>

using namespace std;



class Node
{
    public:
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
};


class LinkedList
{
  public:
  Node* head;
  LinkedList() : head(nullptr) {}

  void append(int data)
  {
  Node* newNode = new Node(data);

  if(!head)
  { head = newNode; }

  else
  {
    Node* temp = head;
    while (temp->next)
     {
        temp = temp->next;
         }
   temp->next = newNode; }
   }

   Node* search(int searchvalue)       // function to search a value in a list
   {
    Node* current = head;             //assign position to the start(head) of the link list

    while(current)                      //loop iterates until it finds the searched value in the list
    {
         if (current->data == searchvalue)               //check if the current node holds the search value
         {
                return current;

          }
          current = current->next;                   //iterates to the next node

    }
     return nullptr;                        //default: when value not found,
    }

    void reverse()
    {
      Node* prev = nullptr;
      Node* current = head;
      Node* next = nullptr;

      while (current != nullptr)
       {
          next = current->next; // Store the next node
          current->next = prev; // Reverse the link

          // Move pointers one position ahead
        prev = current;
        current = next;
      }

      head = prev; // Update the head to the last node (prev)
      }


      void printList()
      {
        Node* temp = head;

        while (temp != nullptr)
        {
             cout << temp->data << " ";
             temp = temp->next;
         }
         cout << endl;
       }
};




int main()
{
    LinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);

    // Search example
    int num = 3;        //search value
    Node* node = list.search(num);
    if (node)
     {
        cout << "Found node with value "<< num << endl;
      }

    else {
        cout << "Node with value "<< num << " not found" << endl;
    }

    cout << "List before reversing:"<< endl;
    list.printList();

    cout << "List After reversing:"<< endl;
    list.reverse();
    list.printList();

}

