//week05-1.cpp
//leetcode�ǲ߭p�e
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);//��r���ܦ����e��cin iostream
        string word;//�r�ꪺword
        //ss>>word;//�ܹ����e�Ъ�cin>>word
        //cout<<"Ū��F"<<word<<"\n";
        //ss>>word;//�ܹ����e�Ъ�cin>>word
        //cout<<"Ū��F"<<word<<"\n";
        while(ss>>word){
            //�̭����򳣤���
        }
        return word.length();
    }
};
