//定义链表
struct ListNode
{
	int val;
	ListNode* next;
	ListNode() : val(0),next(nullptr){}
	ListNode(int x) : val(x),next(nullptr){}
	ListNode(int x,ListNode* next) : val(x),next(next){}
};

class Solution {							//将两升序链表升序合并
public:
	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
		//创建一个新链表的头结点和当前节点
		ListNode* dummy = new ListNode(0);
		ListNode* current = dummy;
		//遍历两个链表，比较节点值并按照升序连接到新链表中
		while (list1 != nullptr && list2 != nullptr) {
			if (list1->val <= list2->val) {
				current->next = list1;
				list1 = list1->next;
			}
			else {
				current->next = list2;
				list2 = list2->next;
			}
			current = current->next;
		}
		if (list1 != nullptr) {
			current->next = list1;
		}
		else{
			current->next = list2;
		}
		//返回新链表的头结点
		return dummy->next;
	}
};