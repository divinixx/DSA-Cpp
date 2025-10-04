#include<iostream>
#include<vector>
using namespace std;

int  findFirstOccurence(int arr[], int n, int target, int &ansIndex){

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            // ans found -> may or may not be first occurence
            // Store and Compute
            ansIndex = mid;
            // kyuki First Occurence ki baat hori hai 
            // toh btao left me jau first occ ke liye ya right me 
            // left mai jaao

            e = mid - 1;
        }

        else if(target> arr[mid]){
            s = mid + 1;
        }

        else{

            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    return ansIndex;
}

int  findLastOccurence(int arr[], int n, int target, int &ansIndex)
{

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            // ans found -> may or may not be first occurence
            // Store and Compute
            ansIndex = mid;
            // kyuki First Occurence ki baat hori hai
            // toh btao left me jau first occ ke liye ya right me
            // left mai jaao

            s = mid + 1;
        }

        else if (target > arr[mid])
        {
            s = mid + 1;
        }

        else
        {

            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    return ansIndex;
}

int main() {

    int arr[] = {1,1,2,2,2,2,3};
    int n = sizeof(arr) / sizeof(arr[1]);
    int target = 4;

    int ansIndex = -1; // -1 means Answer Not Found; 
   int a =  findFirstOccurence(arr, n, target, ansIndex);
   int b =  findLastOccurence(arr, n, target, ansIndex);

   int t = (b - a) + 1;
   cout << "Total  Occurence Index: " << t << endl;
   return 0;
}