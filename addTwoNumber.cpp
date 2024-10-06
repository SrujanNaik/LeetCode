#include<iostream>

struct ListNode{
	int val;
	ListNode *next;
};

class Solution{
	public:
		ListNode* addTwoNumber(ListNode* l1,ListNode* l2){
			ListNode* sum = nullptr;
			ListNode* eq1 = l1;
			ListNode* eq2 = l2;
			int temp,carry = 0;
			while(eq1 != nullptr || eq2 != nullptr){
				if(eq1 == nullptr){
					temp = eq2->val+carry;
					carry = 0;
					if(temp > 9){
						carry = temp / 10;
						temp = temp % 10;
					}
					insertIntoSum(sum,temp);
					eq2 = eq2->next;
				}else if(eq2 == nullptr){
					temp = eq1->val+carry;
					carry = 0;
					if(temp > 9){
						carry = temp / 10;
						temp = temp % 10;
					}
					insertIntoSum(sum,temp);
					eq1 = eq1->next;
				}else{
					temp = eq1->val + eq2->val + carry;
					carry = 0;
					if(temp > 9){
						carry = temp / 10;
						temp = temp % 10;
					}
					insertIntoSum(sum,temp);
					eq1 = eq1->next;
					eq2 = eq2->next;
				}

			}
			if(carry != 0){
				temp = carry;
				insertIntoSum(sum,temp);
			}
			return sum;
		}
		void insertIntoSum(ListNode*& sum,int temp){
			ListNode* newnodeSum = new ListNode();
			if(sum == nullptr){
				sum = newnodeSum;
				newnodeSum->val = temp;
				newnodeSum->next = nullptr;
				return;
			}

			ListNode* temp1 = sum;
			while(temp1->next != nullptr){
				temp1 = temp1->next;
			}
			temp1->next = newnodeSum;
			newnodeSum->val = temp;
			newnodeSum->next = nullptr;
		}
		
};

void insertIntol1(ListNode*& l1,int val){
	ListNode* newnodel1 = new ListNode();
	newnodel1->val = val;
	newnodel1->next = l1;
	l1 = newnodel1;
}

void insertIntol2(ListNode*& l2,int val){
	ListNode* newnodel2 = new ListNode();
	newnodel2->val = val;
	newnodel2->next = l2;
	l2 = newnodel2;
}

int main(){
	ListNode* l1 = nullptr;

	insertIntol1(l1,9);
	insertIntol1(l1,4);
	insertIntol1(l1,2);

	ListNode* l2 = nullptr;

	insertIntol2(l2,9);
	insertIntol2(l2,4);
	insertIntol2(l2,6);
	insertIntol2(l2,5);

	Solution sol;
	ListNode* sum = sol.addTwoNumber(l1,l2);

	while(sum != nullptr){
		std::cout << sum->val << " ";
		sum = sum->next;
	}

	return 0;
}
