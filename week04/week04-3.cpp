//week04-3.cpp
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N=digits.size();//陣列的大小
        for(int i=N-1;i>=0;i--){//倒過來的迴圈
            if(digits[i]==9){//要進位,不能結束
                digits[i]=0;//設置成0,繼續做
            }else{//如果不用進位,直接++結束
                digits[i]++;//+1
                return digits;//全部陣列當答案return
            }
        }
        digits.insert(digits.begin(),1);//最左邊 要插入1
        return digits;//結束
    }
};
