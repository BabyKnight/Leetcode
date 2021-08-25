#include <stdio.h>
#include <stdlib.h>

struct ListNode {
		int val;
		struct ListNode *next;
};

struct ListNode* create(int l[], int n)
{
		if (n<1)
				return NULL;

		int i=0;
		struct ListNode *s = (struct ListNode*)malloc(sizeof(struct ListNode));
		s->val = l[i++];
		s->next = NULL;

		struct ListNode *tmp, *curr;
		curr = s;

		while(i<n){
				tmp = (struct ListNode*)malloc(sizeof(struct ListNode));
				tmp->val = l[i++];
				tmp->next = NULL;
				curr->next = tmp;
				curr = curr->next;
		}
		return s;
}

void print_node(struct ListNode *L)
{
		struct ListNode *t;
		t = L;
		while(t != NULL){
			printf("%d  ", t->val);
			t = t->next;
		}
		printf("\n");
}

struct ListNode* MergeTwoLists(struct ListNode* l1, struct ListNode* l2){
		struct ListNode *p, *q, *res, *curr;
		p = l1, q = l2;
		if(p==NULL)
				return q;
		if(q==NULL)
				return p;
		if(p->val <= q->val){
				res = p;
				p = p->next;
		}
		else{
				res = q;
				q = q->next;
		}
		curr = res;
		while(p!=NULL && q!=NULL){
				if(p->val < q->val){
						curr->next = p;
						curr = curr->next;
						p = p->next;
				}
				else{
						curr->next = q;
						curr = curr->next;
						q = q->next;
				}
		}
		if(p!=NULL)
				curr->next = p;
		if(q!=NULL)
				curr->next = q;
		return res;
}

struct ListNode* Merge(struct ListNode* l1, struct ListNode* l2)
{
		struct ListNode *p, *q;
		p = l1, q = l2;
		if(p == NULL)
				return q;
		else if (q == NULL)
				return p;
		else if (p->val <= q->val){
				p->next = Merge(p->next, q);
				return p;
		}
		else{
			q->next = Merge(p, q->next);
			return q;
		}
}


int main()
{
		int a[5] = {1, 3, 5, 7, 9};
		int b[6] = {0, 2, 4, 6, 8, 10};

		struct ListNode *ra, *rb, *rc, *rd; 
		ra = create(a, 5);
		print_node(ra);
		rb = create(b, 6);
		print_node(rb);
		//rc = MergeTwoLists(ra, rb);
		//print_node(rc);

		rd = Merge(ra, rb);
		print_node(rd);


}
