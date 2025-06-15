#include<iostream>
using namespace std;


int getLength(char arr[], int size) {
    int cnt=0;
    int i = 0;

    while(arr[i] != '\0') {
        cnt++;
        i++;
    }

    return cnt;
}

bool checkPalindrome(char arr[], int n) {
    int len = getLength(arr, n);
    int i = 0;
    int j = len -1;

    while(i <= j) {
        if(arr[i] == arr[j]) {
            i++;
            j--;
        }
        else{ 
            return false;
        }
    }

    return true;
}

void convertIntoLowerCase(char arr[], int  n) {

    int len = getLength(arr, n);

    for(int i =0; i < len; i++) {

        if((int)arr[i] < 97) {
        char ch  = arr[i];
        ch = ch - 'A' + 'a';
        arr[i] = ch;
        }
    }
}
int main() {
    char arr[100];
    cin >> arr;
    convertIntoLowerCase(arr, 100);
    cout<< arr<<endl;
    cout<< "Is the String Palindrome or Not "<< checkPalindrome(arr, 100)<< endl;
    return 0;
}