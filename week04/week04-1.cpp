//week04-1.cpp
//leetcode�D��
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans=numBottles;//�@�}�l�ܤF�o��h�~
        while(numBottles >= numExchange){  //�p�G�~�l�� >= �I���q,�N�I��
            numBottles=numBottles-numExchange+1;//�I���@�~����
            ans++;//�h�ܤ@�~
            numExchange ++;//�I�����зǦh�@�~
        }
        return ans;
    }
};
