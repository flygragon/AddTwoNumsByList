#pragma once
#include"ListNode.h"

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		if (!l1) return l2;
		if (!l2) return l1;
		ListNode* head = l1;
		int temp = 0;
		while (l1 && l2) {
			temp += l1->val + l2->val;
			l1->val = temp % 10;
			temp /= 10;
			if (!l1->next || !l2->next)
				break;
			l1 = l1->next, l2 = l2->next;
		}
		if (!l1->next)
			l1->next = l2->next;
		while (l1->next) {
			l1 = l1->next;
			temp += l1->val;
			l1->val = temp % 10;
			temp /= 10;
		}
		if (temp)
			l1->next = new ListNode(temp);
		l2 = nullptr, l1 = nullptr;
		return head;
	}
} Add;