//week03-2b.cpp�G�X�@(���n�u����nums[i]�u��+1,-1,0)
//leetcode�ǲ߭p�e�ĤK�D1822
//��}�C���_��,�ݥ��t��,�٬O0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;//�]��0������Ƴ��O0,1�̨�,���ƻ�K����
        for(int i=0;i<nums.size();i++){//�ݦ��X�Ӽ�,�j��]�X��
            if(nums[i]>0)ans*= +1;
            if(nums[i]<0)ans*= -1;
            if(nums[i]==0)ans*= 0;
        }
        if(ans>0)return 1;
        if(ans<0)return -1;
        return 0;
    }
};
