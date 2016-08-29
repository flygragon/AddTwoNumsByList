// AddTwoNumsByList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"AddTwoNumsByList.h"
#include"ListNodeOutput.h"
#include"ListNodeInput.h"
#include<time.h>

int main()
{
	ListNode*l1 = ListInPut.Input(),
		*l2 = ListInPut.Input(),
		*head = Add.addTwoNumbers(l1, l2);
	ListOut.ListOutput(head);
	cout << clock() / double(CLOCKS_PER_SEC) << '\n';
	exit(0);
    return 0;
}

