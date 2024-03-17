#include <iostream>
#include <list>
using namespace std;


void printSpreadsheet(const list<list<int>>& spreadsheet)
 {
    for (const auto& row : spreadsheet)
     {
        for (int cell : row)
        {
            cout << cell << "\t";
         }
         cout << endl;
     }
}

void addRow(list<list<int>>& spreadsheet, const list<int>& newRow)
{
    spreadsheet.push_back(newRow);
}


void deleteRow(list<list<int>>& spreadsheet, int rowIndex)
{
    auto it = spreadsheet.begin();
    advance(it, rowIndex);

    if (it != spreadsheet.end())
    {
        spreadsheet.erase(it);
        cout << "Row " << rowIndex << " deleted successfully." << endl;
    }

    else
    {
        cout << "Invalid row index." << endl;
    }
}

int main()
{
     list<list<int>> spreadsheet;


     spreadsheet = {
         {1, 2, 3},
         {4, 5, 6},
         {7, 8, 9}
     };


    cout << "Initial Spreadsheet:" << endl;
    printSpreadsheet(spreadsheet);
    cout << endl;


    list<int> newRow = {10, 11, 12};
    addRow(spreadsheet, newRow);


    cout << "Spreadsheet after adding a new row:" << endl;
    printSpreadsheet(spreadsheet);
    cout << endl;


    deleteRow(spreadsheet, 2);

  
    cout << "Spreadsheet after deleting a row:" << endl;
    printSpreadsheet(spreadsheet);

    return 0;
}
