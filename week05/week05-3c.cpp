///week05-3c.cpp part 1:input,part2:output
///part3:stringstream,part4:reverse反過來
///part5:火車頭+車廂+車廂+車廂
///CPE第二題UVA483倒過來
#include <iostream>
#include <sstream>///part3:stringstream
#include <algorithm>///part4:reverse
using namespace std;
int main()
{
    string line;///一行的字串part:input
    while(getline(cin,line)){///讀進來
        stringstream ss(line);///part3:用stringstream斷字
        string word;///字放這裡
        ss>>word;
        reverse(word.begin(),word.end());
        cout<<word;///火車頭沒有空格
        while(ss>>word){
            reverse(word.begin(),word.end());
            cout<<" "<<word;
            ///cout<<"讀到了"<<word<<endl;///part3
        }
        cout<<endl;///cout<<line<<endl;///part 2:output
    }
}
