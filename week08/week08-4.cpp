///week08-4.cpp
///�Ʀr�¬} �d���C�J�`�� 6174(�j��p-�p��j,����7��)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    cout<<"�п�J���N4���(�����P):";///ex:1234,2,3,4,1
    int n;
    cin>>n;
    for(int i=0;i<7;i++){///�C�B��,���w����¬}6174
            vector<int>a;///���Y�ۦp���}�C
            while(n>0){
                a.push_back(n%10);
                n=n/10;
            }
            sort(a.begin(),a.end());
            int M=a[3]*1000+a[2]*100+a[1]*10+a[0];
            int m=a[0]*1000+a[1]*100+a[2]*10+a[3];
            n=M-m;
            cout<<M<<"�"<<m<<"�o��"<<n<<endl;
    }
}
