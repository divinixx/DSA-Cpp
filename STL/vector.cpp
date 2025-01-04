#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;
    // vector<int> s;

    // s.push_back(100);
    // s.push_back(200);
    // s.push_back(300);
    // s.push_back(400);

    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(13); 


    // Traversing the Vector using Iterator 

    // Create an Iterator
    vector<int>::iterator it = v.begin();

    while (it != v.end())
    {
        cout << *it << " ";
        it++;
    }
    

    // v.swap(s);

    // cout << v[0] << " " << v[1] << " " << v[2] << " " << v[3] << endl;

    // for(int i: v){

    //     cout << i << " " << endl;
        
    // }
    // for (int i : s)
    // {
    //     cout << i << " ";
    // }

    // Creation

    // vector<int> marks;
    // cout << marks.max_size() << endl;

    // marks.push_back(10);
    // marks.push_back(20);
    // marks.push_back(30);
    // marks.push_back(40);
    // marks.push_back(50);
    // marks.clear();

    // marks.insert(marks.begin(), 60);
    // cout << marks.size() << endl;
    // cout << marks[0] << endl;

    // cout << marks.capacity() << endl;

    // cout << marks[0] << endl;
    // cout << marks.at(1) << endl;

    // cout << "Size : " << marks.size() << endl;
    // cout << marks.front() << endl;
    // cout << marks.back() << endl;

    // cout << *(marks.begin()) << endl;
    // vector<int> miles(10);
    // vector<int> distanc(15, 0);

    return 0;
}