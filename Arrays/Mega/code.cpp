#include <iostream>
#include<vector>
#include <unordered_map>

using namespace std;


int main() {

    unordered_map<int, int> table;

    //Insertion 
    table[1] = 53;  
    table[2] = 54;
    table[3] = 55;

    table[2] = 57; // Reassign Key must be Unique

    // Iterate
    // I have to Iterate over 3 entries
    //for loop
    // map me iterate krne ke liye, make an iterator

    unordered_map<int, int>::iterator it;
    // for (it = table.begin(); it != table.end(); it++)
    // {
    //     int key = it->first; //Syntax
    //     int value = it->second;

    //     cout << "Key: " << key << " " << "Value: " << value << endl;
    // } 

    for(auto it: table){

        int key = it.first;  // second
        int value = it.second;

        cout << "Key: " << key << " " << "Value: " << value << endl;
    }


    // Searching or Find -->> table/map Veryfast (Avg Case Comp) O(1)
    if(table.find(2) != table.end())  //Syntax
    {
        //found
        int value = table[2];
        cout <<"Found: "<< value << endl;
    }

    else
    {

        cout << "Not Found" << endl;
    }

    table.erase(2);

    cout << " After Erase: " << endl;

    unordered_map<int, int>::iterator itt;
    for (itt = table.begin(); itt != table.end(); itt++)
    {
        int key = itt->first; // Syntax
        int value = itt->second;

        cout << "Key: " << key << " " << "Value: " << value << endl;
    } 

    return 0; 
}