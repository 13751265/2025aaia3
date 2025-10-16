///week06-1.cpp
//soit106_advance
#include <iostream>
int f(int n)
{
	if(n<0)return -n;
	return n;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
