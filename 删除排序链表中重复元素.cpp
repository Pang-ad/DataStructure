ListNode* deleteDuplicates(ListNode* head)
{
	if(!head || !head->next)
	{
		return head;	//链表为空或只有一个节点，直接返回原链表
	}
	ListNode* curr = head;

	while (curr && curr->next)
	{
		if (curr->val == curr->next->val)
		{
			ListNode* temp = curr->next;
			curr->next = curr->next->next;
			delete temp;	//删除重复节点
		}
		else
		{
			curr = curr->next;
		}
	}
	return head;
}