class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1)
        {
            return list2;
        }
        else
        {
         if(!list2)
         {
             return list1;
         }
        }
        ListNode *ptr=list1;
        if(list1->val > list2->val)
        {
            ptr=list2;
            list2=list2->next;
        }
        else
        {
            list1=list1->next;
        }
        ListNode *cur=ptr;
        while(list1 && list2)
        {
            if(list1->val < list2->val)
            {
                cur->next=list1;
                list1=list1->next;
            }
            else
            {
                cur->next = list2;
                list2=list2->next;
            }
            cur=cur->next;
        
        }
        if(!list1)
        {
            cur->next=list2;
            
        }
        else
        {
            cur->next=list1;
        }
        return ptr;
    }
};
