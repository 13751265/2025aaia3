#week01-2.py
#leetcode 28
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H=len(haystack) #�r�ꪺ����
        N=len(needle)   #�r�ꪺ����
        for i in range(H-N+1):  #�n�O�o+1
            #����slicing
            if haystack[i:i+N]==needle:
                return i#���m����
        return -1#�S�����
