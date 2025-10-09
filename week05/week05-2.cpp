///week05-2.cpp
///熟悉stringstream
#include <iostream>
#include <sstream>///stringstream需要他
#include <string>///字串string
using namespace std;
int main()
{
    cout<<"請輸入一段英文,可空格";
    string s;///字串s
    getline(cin,s);///一ˊ次讀入一整行,放入s
    cout<<"讀到了s字串: "<<s<<endl;

    stringstream ss(s);
    string word;
    while(ss>>word){
        cout<<"有一個字"<<word<<endl;
    }
}
