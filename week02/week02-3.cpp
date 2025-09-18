///week02-3.cpp使用c++2011年新版的字串stoi()功能
///在codeblocks裡,必須開啟setting-compier...把c++11打勾
///soit106_advance_001 c++
#include <iostream>///cin cout
#include <string>///string 字串的功能
using namespace std;
int main()
{
	string a;///宣告字串a
	cin>>a;///讀入字串a

	string ans;///宣告字串ans放答案用的
	int N=a.length();///字串a的長度
	for(int i=N-1;i>=0;i--){///倒過來的迴圈
		ans+=a[i];///在迴圈裡,把[i]塞到ans的後面
	}
	cout<<a<<'+'<<stoi(ans)<<'='
		<<stoi(a)+stoi(ans)<<endl;
}///stoi()is"string to int"
