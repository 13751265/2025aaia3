///week02-3.cpp�ϥ�c++2011�~�s�����r��stoi()�\��
///�bcodeblocks��,�����}��setting-compier...��c++11����
///soit106_advance_001 c++
#include <iostream>///cin cout
#include <string>///string �r�ꪺ�\��
using namespace std;
int main()
{
	string a;///�ŧi�r��a
	cin>>a;///Ū�J�r��a

	string ans;///�ŧi�r��ans�񵪮ץΪ�
	int N=a.length();///�r��a������
	for(int i=N-1;i>=0;i--){///�˹L�Ӫ��j��
		ans+=a[i];///�b�j���,��[i]���ans���᭱
	}
	cout<<a<<'+'<<stoi(ans)<<'='
		<<stoi(a)+stoi(ans)<<endl;
}///stoi()is"string to int"
