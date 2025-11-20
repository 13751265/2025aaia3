//week11-3.cpp
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5=0,d10=0,d20=0;//三種鈔票
        for(int bill:bills){//c++進階
            if(bill==5)d5++;//順利拿到5元鈔票
            if(bill==10){//找5元
                if(d5<1)return false;//沒有5元鈔
                d10++;//拿出10元鈔
                d5--;//找出5元鈔
            }
            if(bill==20){
                if(d10>0 && d5>0){
                    d20++;
                    d10--;
                    d5--;
                }else if(d5>=3){
                    d20++;
                    d5-=3;
                }else return false;
            }

        }
        return true;//順利賣光,成功
    }
};
