#include <iostream>
#include <list>
#include <string>

using namespace std;

void printIndentation(int level)
{
    for (int i = 0; i < level; ++i)
    {
        cout << "  ";
    }
}

void printTodoList(const list<list<string>>& todoList, int level = 0)
{
    for (const auto& task : todoList) {
        printIndentation(level);
        for (const auto& item : task) {
            cout << item << " ";
        }
        cout << endl;
    }
}

int main()
{
    list<list<string>> todoList = {
        {"Main Task 1"},
        {"Main Task 2", " Sub-task 1 of Main Task 2.", " Sub-task 2 of Main Task 2."},
        {"Main Task 3", " Sub-task 1 of Main Task 3.", " Sub-sub-task 1 of Sub-task 1 of Main Task 3.", " Sub-sub-task 2 of Sub-task 1 of Main Task 3. ", " Sub-task 2 of Main Task 3."}
    };

    printTodoList(todoList);

    return 0;
}
