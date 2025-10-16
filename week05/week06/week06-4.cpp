//week06-4.cpp
//leetcode學習計畫simulation模擬
class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
        for(char c:moves){//c++進階迴圈
            if(c=='U'){//c++進階迴圈
                y++;
            }else if(c=='D'){//往下
                y--;
            }else if(c=='L'){//往左
                x--;
            }else if(c=='R'){//往右
                x++;
            }
        }//最後還有留在原點(0,0)嗎?
        if(x==0&&y==0)return true;
        else return false;
    }
};
