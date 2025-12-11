//week14-1.cpp
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int>a;//伸縮自如的陣列
        while(head!=nullptr){
            a.push_back(head->val);
            head=head->next;
        }
        ListNode*ans=new ListNode(999);//隨便放的
        ListNode*ans2=ans;//到過來的迴圈,再把他塞到ans尾巴的答案
        for(int i=a.size()-1;i>=0;i--){//倒過來的迴圈
            ans2->next=new ListNode(a[i]);
            ans2=ans2->next;//到下一筆繼續收尾
        }
        return ans->next;
    }
};
