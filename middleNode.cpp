#include<iostream>

struct ListNode{
	int val;
	ListNode *next;
};

class Solution{
	public:
		ListNode* middleNode(ListNode* head){
			ListNode* middle = head;
			ListNode* fast = head;
			while(fast != nullptr && fast->next != nullptr){
				middle = middle->next;
				std::cout << middle->val;
				fast = fast->next->next;
			}

			return middle;
		}
};

void insertInto(ListNode*& head,int val){
	ListNode* newnode = new ListNode();
	newnode->val = val;
	newnode->next = head;
	head = newnode;
}


int main(){
	ListNode* head = nullptr;

	insertInto(head,6);
	insertInto(head,5);
	insertInto(head,4);
	insertInto(head,3);
	insertInto(head,2);
	insertInto(head,1);

	Solution sol;
	ListNode* middle = sol.middleNode(head);
	std::cout << middle->val << "\n";
	ListNode* temp = middle;
	while(temp !=nullptr){
		std::cout << temp->val;
		temp = temp->next;
	}

	return 0;
}

