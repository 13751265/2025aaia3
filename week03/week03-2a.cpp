//week03-2a.cpp�G�X�@
//leetcode�ǲ߭p�e�ĤK�D1822
//��}�C���_��,�ݥ��t��,�٬O0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;//�]��0������Ƴ��O0,1�̨�,���ƻ�K����
        for(int i=0;i<nums.size();i++){//�ݦ��X�Ӽ�,�j��]�X��
            ans*=nums[i];//�C����num[i]���ians��
        }//�Ʀr�V���V�j,1000�ӼƦr,����@�b,�N�z��,�ҥH�{�����F
        if(ans>0)return 1;
        if(ans<0)return -1;
        return 0;
    }
};
