///week05-2.cpp
///���xstringstream
#include <iostream>
#include <sstream>///stringstream�ݭn�L
#include <string>///�r��string
using namespace std;
int main()
{
    cout<<"�п�J�@�q�^��,�i�Ů�";
    string s;///�r��s
    getline(cin,s);///�@����Ū�J�@���,��Js
    cout<<"Ū��Fs�r��: "<<s<<endl;

    stringstream ss(s);
    string word;
    while(ss>>word){
        cout<<"���@�Ӧr"<<word<<endl;
    }
}
