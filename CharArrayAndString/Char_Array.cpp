#include<iostream>
using namespace std;

void replaceChar(char originalChar, char newChar, char arr[], int size){

    for(int i=0; i< size; i++){
        if(arr[i] == originalChar){
            arr[i] = newChar;
        }
    }
}

int getLength(char arr[], int size) {

    int cnt = 0;
    int index = 0;

    while(arr[index] != '\0') {

        cnt++;
        index++;
    }

    return cnt;
}

void convertIntoUpperCase(char arr[], int  n) {

    int len = getLength(arr, n);

    for(int i =0; i < len; i++) {
        char ch  = arr[i];
        ch = ch - 'a' + 'A';
        arr[i] = ch;
    }
}


void convertIntoLowerCase(char arr[], int  n) {

    int len = getLength(arr, n);

    for(int i =0; i < len; i++) {
        char ch  = arr[i];
        ch = ch - 'A' + 'a';
        arr[i] = ch;
    }
}
int main() {

    char arr[100];
    cin >> arr;
    // convertIntoUpperCase(arr, 100);
    convertIntoLowerCase(arr, 100);
    // replaceChar('@', ' ', arr, 100);
    cout<< arr <<endl;
    // cout<< getLength(arr, 100) <<endl;

    // cout<<"Enter the Name: " <<endl;

    // cin.getline(arr, 100, '\t');

    // cout<< endl << arr <<endl;

    return 0;
}
