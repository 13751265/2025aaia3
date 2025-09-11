#week01-2.py
#leetcode 28
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H=len(haystack) #字串的長度
        N=len(needle)   #字串的長度
        for i in range(H-N+1):  #要記得+1
            #切片slicing
            if haystack[i:i+N]==needle:
                return i#把位置當答案
        return -1#沒有找到
