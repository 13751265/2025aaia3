//week07-3.cpp�ǲ߭p�esimulation�ĤT�D
//1275.find winner in a tic tac toe game
class Solution {
public:          //vector�Oc++���}�C,���Y�ۦp,��2D�����g
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3]={};//c�y�����}�C,�j1�йL,���²��,{}�j�A���N���l��,�̭��Ū��N���O0;
        int now=1;//�{�b�����a 1:���aA,2:���aB
        int winner=0;//�٨S�����o�Ӫ����a
        for(vector<int>&move:moves){
            int i=move[0],j=move[1];//���X�y��
            a[i][j]=now;//��Ѥl,�U�b�}�C��
            //�U����,�ˬd�O�_���
            if(now==a[i][0]&& now==a[i][1]&&now==a[i][2])winner=now;//��u
            if(now==a[0][j]&& now==a[1][j]&&now==a[2][j])winner=now;//���u
            if(now==a[0][0]&& now==a[1][1]&&now==a[2][2])winner=now;//���W�k�U�׽u
            if(now==a[0][2]&& now==a[1][1]&&now==a[2][0])winner=now;//�k�W���U�׽u
            if(now==1)now=2;//��H�n�洫1��2
            else now=1;//��2��1
        }
        if(winner==1)return "A";
        else if(winner==2)return "B";
        else if(moves.size()==9)return "Draw";
        else return "Pending";
    }
};
