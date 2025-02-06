#include<iostream>
using namespace std;


int findOccuringElement(int arr[], int size){

    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {

        // Single Element
        if (s == e)
        {
            return arr[s];
        }

        // Mid Index Value
        int currVal = arr[mid];
        // mid-1 Index pr Value , if exist
        int leftVal = -1;
        if (mid - 1 >= 0)
        {
            leftVal = arr[mid - 1];
        }
        // mid+1 index pr value, if exist
        int rightVal = -1;
        if (mid + 1 < size)
        {
            rightVal = arr[mid + 1];
        }

        if (currVal != leftVal && currVal != rightVal)
        {
            return currVal;
        }

        if (currVal == leftVal && currVal != rightVal)
        {
            int pairStartingIndex = mid - 1;
            if (pairStartingIndex & 1)
            {

                e = mid - 1;
            }

            else
            {
                s = mid + 1;
            }
        }

        if (currVal == rightVal && currVal != leftVal)
        {

            int pairStartingIndex = mid - 1;

            if (pairStartingIndex & 1)
            {

                s = mid + 1;
            }
            else
            {

                e = mid - 1;
            }
        }

        mid = s + (e - s) / 2;
    }

    return -1;
}

int main(){

    int arr[] = {1, 1, 2, 2, 3, 3, 4, 5, 5, 3, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int ans = findOccuringElement(arr, size);
    cout << "Answer Index: " << ans << endl;
    cout << "Answer Element: " << arr[ans] << endl;

    return 0;
} 