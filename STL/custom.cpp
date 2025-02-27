#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void print(vector<int> &v)
{

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    cout << endl;
}

bool myComp(int a, int b)
{
    return a > b; // Decreasing order
}

void printvv(vector<vector<int>> &v)
{

    for (int i = 0; i < v.size(); i++)
    {
        vector<int> &temp = v[i];
        int a = temp[0];
        int b = temp[1];

        cout << a << " " << b << endl;
    }

    cout << endl;
}


bool myComp1stIndex(vector<int> &a, vector<int> &b)
{
    return a[0] < b[0]; // Increasing order
}

bool myComp2ndIndex(vector<int> &a, vector<int> &b)
{
    return a[1] < b[1]; // Increasing order
}
int main()
{

    // vector<int> v = {44, 55, 22, 13, 78};

    // sort(v.begin(), v.end(), myComp);
    // print(v);

    vector<vector<int>> v;
    int n;
    cout << "Enter the Size of Vector: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }

    cout << "Here are the Sorted Values of Vector of Vector: " << endl;

    printvv(v);
    cout << "Sorted by 1st Index: " << endl;
    sort(v.begin(), v.end(), myComp2ndIndex);
    printvv(v);
    return 0;
}