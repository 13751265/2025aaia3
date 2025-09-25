//week03-2b.cpp(ぃ璶痷nums[i]+1,-1,0)
//leetcode厩策璸礶材肈1822
//р皚癬ㄓ,タ璽计,临琌0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;//0ヴ计常琌0,1程,或獽ぐ或
        for(int i=0;i<nums.size();i++){//Τ碭计,癹伴禲碭Ω
            if(nums[i]>0)ans*= +1;
            if(nums[i]<0)ans*= -1;
            if(nums[i]==0)ans*= 0;
        }
        if(ans>0)return 1;
        if(ans<0)return -1;
        return 0;
    }
};
