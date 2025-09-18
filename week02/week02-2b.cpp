//week02-2a part2
//soit106_advance_001 c++
#include <iostream>//cin cout
#include <string>//string
using namespace std;
int main()
{
	string a;
	cin>>a;

	string ans;
	int N=a.length();
	for(int i=N-1;i>=0;i--){
		ans+=a[i];
	}
	cout<<a<<'+'<<stoi(ans)<<'='
		<<stoi(a)+stoi(ans)<<endl;
}//stoi()is"string to int"
