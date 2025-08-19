#include<iostream>
using namespace std;

void merge(int arr[] , int s, int e, int mid) {

    int leftLength = mid-s + 1;
    int rightLength = e - mid;

    int *leftArr = new int[leftLength];
    int *rightArr = new int[rightLength];

    int index = s;
    
    for(int i = 0; i < leftLength; i++) {
        leftArr[i] = arr[index];
        index++;
    }
    
    index = mid + 1;
    for(int i = 0; i < rightLength; i++) {
        rightArr[i] = arr[index];
        index++;
    }

    //merge Logic

    int i = 0; //LeftIndex
    int j = 0; //RightIndex
    int k = s; //MainArrayIndex

    while( i < leftLength && j < rightLength) {
        
        if(leftArr[i] < rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
            k++;
        }
        else {
            arr[k] = rightArr[j];
            j++;
            k++;
        }
    }

    //Uncompared Cases

    while( i < leftLength ) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < rightLength) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }

}

void mergeSort(int arr[], int s, int e) {

    if( s >= e) {
        return;
    }

    int mid = s + (e-s)/2;

    mergeSort(arr, s , mid);
    mergeSort(arr, mid +1, e);

    merge(arr, s, e, mid);
    
}
int main () {

    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, size - 1);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}