//week13-3.cpp
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*ans=new ListNode(999);
        ListNode*ans2=ans;//把ans的尾巴接好
        int carry=0;//加法的進位
        while(l1!=nullptr||l2!=nullptr){
            int now=carry;//有沒有進位
            if(l1!=nullptr){//如果還有值
                now+=l1->val;//把值加進去
                l1=l1->next;//換下一筆
            }
            if(l2!=nullptr){
                now+=l2->val;//把值加進去
                l2=l2->next;//換下一筆
            }
            ans2->next=new ListNode(now%10);//個位數準備一個node
            ans2=ans2->next;//換下一筆
            carry=now/10;//進位的部分
        }
        if(carry>0)ans2->next=new ListNode(carry);//還有進位就加一筆
        return ans->next;
    }
};
