//week06-4.cpp
//leetcode�ǲ߭p�esimulation����
class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
        for(char c:moves){//c++�i���j��
            if(c=='U'){//c++�i���j��
                y++;
            }else if(c=='D'){//���U
                y--;
            }else if(c=='L'){//����
                x--;
            }else if(c=='R'){//���k
                x++;
            }
        }//�̫��٦��d�b���I(0,0)��?
        if(x==0&&y==0)return true;
        else return false;
    }
};
