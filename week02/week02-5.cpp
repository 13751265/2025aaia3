//week02-5.cpp leetcode學習計畫
class Solution {
public:
    char findTheDifference(string s, string t) {
        //分類,統計一下26個字母,出現幾次
        int A[256]={};//陣列宣告,ASCII:0-255陣列用大括號的預設值0
        for(int i=0;i<s.length();i++){
            char c=s[i];//找到第i個字母
            A[c]++;//分類,放進對應的字母桶子裡
        }
        for(int i=0;i<t.length();i++){
            char c=t[i];//找到第i個字母
            A[c]--;//從桶子裡,拿出字母
            if(A[c]<0)return c;
        }
        return 0;
    }
};
