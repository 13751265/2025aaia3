//week08-2.cpp
//�]�w�@��0
//����@��Ū,�@��]��0,�n�ⶥ�q,�A�]0
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //�Ĥ@���q,��Ū��,�O�U����0����i�Mj
        int M=matrix.size(),N=matrix[0].size();//����M,�k��N
        vector<int>markI(M,0),markJ(N,0);//�ŧiC++���}�C,���פ��OM N,�̭����]��0
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(matrix[i][j]==0){///�n�p�U������i,j
                    markI[i]=1;//�аO�@�Ui���o����,���@�U�M��0
                    markJ[j]=1;//�аO�@�Uj���o����,���@�U�M��0
                }
            }
        }
        //��2���q �A�ӵ�markI�MmarkJ���аO,�����M0
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(markI[i]==1||markJ[j]==1)matrix[i][j]=0;
            }//�p�G���аO,�A�⥦���������ܦ�0
        }
    }
};
