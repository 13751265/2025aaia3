//week05-1.cpp
//leetcode學習計畫
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);//把字串變成之前的cin iostream
        string word;//字串的word
        //ss>>word;//很像之前教的cin>>word
        //cout<<"讀到了"<<word<<"\n";
        //ss>>word;//很像之前教的cin>>word
        //cout<<"讀到了"<<word<<"\n";
        while(ss>>word){
            //裡面什麼都不做
        }
        return word.length();
    }
};
