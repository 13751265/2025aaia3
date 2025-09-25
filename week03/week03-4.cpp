//week03-4.cpp
//leetcode�D���D
class Solution {//�ϥΰʺA�W��,�C�C��s�}�C
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        //triangle[i][j]��i�h����j�Ӽ�
        int N=triangle.size();//�`�@���X�h
        //�q�U���W�d,�̤U����N-1�h,�S���D,�N�O�������̤p��
        for(int i=N-2;i>=0;i--){
            for(int j=0;j<=i;j++){//�˹L�Ӫ��j��,�qn-2���W
                triangle[i][j]+=min(triangle[i+1][j],triangle[i+1][j+1]);
            }
        }
        return triangle[0][0];
    }
};
