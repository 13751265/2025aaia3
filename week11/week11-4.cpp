class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1,j=b.length()-1;//最右邊的個位數
        vector<int>ans;//伸縮自如的陣列
        int carry=0;
        while(i>=0||j>=0){//想要a[i]vs.b[j]來進行加法
            int now=carry;//現在這個位數做加法
            if(i>=0){
                now+=a[i]-'0';//字母a[i]減掉'0'變數值
                i--;//倒過來的迴圈
            }
            if(j>=0){
                now+=b[j]-'0';
                j--;
            }
            //加完後放答案
            ans.push_back(now%2);
            carry=now/2;//看有沒有進為
        }
        if(carry>0)ans.push_back(carry);
        //迴圈外面ans可以拿來用
        string strAns;//最後的return字串
        for(int i=ans.size()-1;i>=0;i--){
            strAns=strAns+(char)(ans[i]+'0');
        }
        return strAns;
    }
};
