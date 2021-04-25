#include <stdio.h>
#include "leet_struct.h"

struct ListNode* addTwoNumbers(struct ListNode*, struct ListNode*);

int main()
{

	struct ListNode *input;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
	    struct ListNode* p1 = l1;
    struct ListNode* p2 = l2;
    struct ListNode* l3;
    struct ListNode* p;
    struct ListNode* tmp;

    l3 = l1;
    p = l3;

    int carry = 0;

    while(p1!=NULL && p2!=NULL)
    {
        p = p1;
        p->val = p1->val + p2->val + (carry==1?1:0);
        if(p->val >= 10)
        {
            p->val -= 10;
            carry = 1;
        }
        else
            carry = 0;

        p1 = p1->next;
        p2 = p2->next;
    }
    if(p1!=NULL)
    {
        p->next = p1;
        p = p->next;
    }
    else if(p2!=NULL)
    {
        p->next = p2;
        p = p->next;
    }
    else
    {
        tmp = p;
        p = NULL;
    }

    while(p!=NULL && carry==1)
    {
        p->val += 1;
        if (p->val >= 10)
        {
            p->val -= 10;
            carry = 1;
        }
        else
            carry = 0;
        if(p->next == NULL)
            tmp = p;
        p = p->next;
    }
 
    if(p==NULL && carry==1)
    {
        struct ListNode* carry_node = (struct ListNode*)malloc(sizeof(struct ListNode));
        carry_node->next = NULL;
        carry_node->val = 1;
        tmp->next = carry_node;
    }

    return l3;
}
