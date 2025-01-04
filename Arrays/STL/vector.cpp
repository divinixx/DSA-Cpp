#include <iostream>
#include <vector>
using namespace std;

// In Vector , Dont tell the size of Vector..
// Just Keep inserting, i will manage the allocations...

void print(vector<int> v)
{

    cout << "Printing Vector Method 2" << endl;
    for (auto it : v)
    {
        cout << it << " ";
    }

    // int size = v.size();
    // for (int i = 0; i < size; i++)
    // {
    //     cout << v[i] << " ";
    //     // cout << v.at(i) << endl;
    // }

    cout << endl;
}

int main()
{

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);

    print(v);
    // vector<char> v;
    // v.push_back('a');

    // v.push_back('b');

    // v.push_back('c');

    // cout << "Front Element: " << v[0] << endl;
    // cout << "End Element: " << v[v .size() - 1] << endl;

    // cout << "Front Element: " << v.front() << endl;
    // cout << "End Element: " << v.back() << endl;

    // Initialize
    // vector<int> v;

    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int d;
    //     cin >> d;
    //     v.push_back(d);
    // }

    // print(v);

    // for (int i = 0; i < 10; i++)
    // {
    //     v.push_back(10);
    // }

    // // I Want to clear the vector
    // v.clear();
    // v.push_back(50);
    // print(v);

    // // Pop

    // v.pop_back();
    // print(v);
    // Insert
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(4);

    return 0;
}