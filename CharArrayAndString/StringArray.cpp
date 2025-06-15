#include<iostream>
using namespace std;


int main() {


    string str = "Hello Ji, abh yeah baat hogyi na!";
    cout << str.substr(10);
    string word = "yeah baatein";

    // if(str.find(word) !=   string::npos) {
    // }else {
    // }
    int ans = str.find(word);
    cout <<endl << ans << endl;

    string str1 = "Selmon";
    string str2 = "Selmon";

    cout<< str2.compare(str1);

    //Creation 
    // string str;

    // str.push_back('G');
    // str.push_back('A');
    // str.push_back('R');
    // str.push_back('G');

    // cout<< str << endl;

    // string sen;
    // // cin>> sen;
    // getline(cin , sen, '\t');
    // cout<< sen << endl;

    // string name = "Maharana Pratap";

    // if(name.empty()) {
    //     cout << "String is Empty."<<endl;;
    // }else {
    //     cout << "String is NOT Empty."<<endl;
    // }

    // auto it = name.begin();

    // while (it != name.end()) {
    //     cout<< *it << " ";
    //     it++;
    // }
    // cout << endl;

    // cout<< name[0] <<endl;
    // cout <<name.at(0) <<endl;

    // cout<< name.front()<<endl;
    // cout<< name.back() <<endl;
    // cout<< name.length() <<endl;

    // string fname = "Divyanshu";
    // string lname = "Garg";

    // string ans = fname + lname;

    // cout << ans <<endl;
    return 0;
}