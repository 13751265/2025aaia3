///week05-3b.cpp part 1:input,part2:output
///part3:stringstream,part4:reverse�ϹL��
///CPE�ĤG�DUVA483�˹L��
#include <iostream>
#include <sstream>///part3:stringstream
#include <algorithm>///part4:reverse
using namespace std;
int main()
{
    string line;///�@�檺�r��part:input
    while(getline(cin,line)){///Ū�i��
        stringstream ss(line);///part3:��stringstream�_�r
        string word;///�r��o��
        while(ss>>word){
            reverse(word.begin(),word.end());
            cout<<"Ū��F"<<word<<endl;///part3
        }
        cout<<line<<endl;///part 2:output
    }
}

