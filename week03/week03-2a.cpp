//week03-2a.cpp
//leetcode厩策璸礶材肈1822
//р皚癬ㄓ,タ璽计,临琌0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;//0ヴ计常琌0,1程,或獽ぐ或
        for(int i=0;i<nums.size();i++){//Τ碭计,癹伴禲碭Ω
            ans*=nums[i];//–Ωрnum[i]秈ans柑
        }//计禫禫,1000计,,碞脄,┮祘Α岿
        if(ans>0)return 1;
        if(ans<0)return -1;
        return 0;
    }
};
