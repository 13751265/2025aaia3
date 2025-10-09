///week05-4.cpp
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.length();i++){
            s[i]=tolower(s[i]);
        }//每個字母變成小寫(完整版要#include <ctype.h>)
        //或是用#include <cctype>兩者相同
        return s;
    }
};
