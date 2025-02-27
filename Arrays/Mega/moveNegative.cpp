#include<iostream>
using namespace std;


void moveNegativeLeft(int arr[], int n){

    int l = 0;
    int h = n - 1;
    
    while (l <= h)
    {
        if (arr[l]<0)
        {
            l++, h--;
        }
        
        else{

            swap(arr[l], arr[h--]);
        }
    }
    
}

int main() {

    int arr[] = {1, 2, -3, 4, 0 , -5, 6,-8};
    int n = sizeof(arr) / sizeof(int);

    moveNegativeLeft(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}