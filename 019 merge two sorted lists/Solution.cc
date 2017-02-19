class Solution 
{
	public:
		ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) 
		{
			ListNode* merge = new ListNode(0);
			ListNode* tmp   = merge;
        
			while(l1 && l2)
			{
				if(l1->val < l2->val)
				{
					tmp->next = l1;
					l1 = l1->next;
				}
				else
				{
					tmp->next = l2;
					l2 = l2->next;
				}
				tmp = tmp->next;
			}
        
			tmp->next = l1 ? l1 : l2;
			return merge->next;
		}
};