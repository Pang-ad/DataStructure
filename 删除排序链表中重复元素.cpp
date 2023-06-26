ListNode* deleteDuplicates(ListNode* head)
{
	if(!head || !head->next)
	{
		return head;	//����Ϊ�ջ�ֻ��һ���ڵ㣬ֱ�ӷ���ԭ����
	}
	ListNode* curr = head;

	while (curr && curr->next)
	{
		if (curr->val == curr->next->val)
		{
			ListNode* temp = curr->next;
			curr->next = curr->next->next;
			delete temp;	//ɾ���ظ��ڵ�
		}
		else
		{
			curr = curr->next;
		}
	}
	return head;
}