#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<vector<int>> arr(4, vector<int>(4, 0));
    int totalRows = arr.size();
    int totalColumns = arr[0].size();

    vector<vector<int>> brr(4);
    brr[0] = vector<int>(4);
    brr[1] = vector<int>(2);
    brr[2] = vector<int>(3);
    brr[3] = vector<int>(5);

    int rowCount = brr.size();

    return 0;
}