///week07-2.cpp
///TAICA��j��¦�{���]�p(c++)�������D
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;///part1:input
    cin>>n;

    for(int i=1;i<n*2;i++){///part2:output
        for(int j=1;j<n*2;j++){
            ///�L�X�ӫ�,�o�{�����ߪ�1�ܦ��N��
            int d=max(abs(i-n),abs(j-n));
            cout<<d+1;
        }
        cout<<endl;///cout<<"�{�bi�O: "<<i<<endl;///�Ӽh������
    }
    ///part 2:output
}///2�|��3�h,3�|��5�h,4�|��7�h,5�|��9�h
