///week07-2.cpp
///TAICA交大基礎程式設計(c++)期中考題
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;///part1:input
    cin>>n;

    for(int i=1;i<n*2;i++){///part2:output
        for(int j=1;j<n*2;j++){
            ///印出來後,發現正中心的1很有意思
            int d=max(abs(i-n),abs(j-n));
            cout<<d+1;
        }
        cout<<endl;///cout<<"現在i是: "<<i<<endl;///樓層的概念
    }
    ///part 2:output
}///2會有3層,3會有5層,4會有7層,5會有9層
