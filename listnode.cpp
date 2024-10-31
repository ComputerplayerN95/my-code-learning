#include<stdio.h>
#include<stdlib.h>
struct queue
{
	int num;
	struct queue* next;
};
queue* q,*head,*tail;
int sum = 1;
void did(int add, int ope)
{
	q = head->next;
	queue* p = (struct queue*)malloc(sizeof(struct queue));
	while(q->num != add)
	{
		p = q;
		q = q->next;
	}
	if (ope == 0)
	{
		queue* x = (struct queue*)malloc(sizeof(struct queue));
		x->num = sum;
		x->next = q;
		p->next = x;
		sum++;
	}
	else
	{
		queue* x = q->next;
		free(q);
		p->next = x;
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	int add, ope;
	q = (struct queue*)malloc(sizeof(struct queue));
	head = q;
	head->next = NULL;
	tail = q;
	q = (struct queue*)malloc(sizeof(struct queue));
	q->num = 1;
	tail->next = q;
	tail = q;
	tail->next = NULL;
	for (int i = 1; i < n; i++)
	{
		sum++;
		scanf("%d %d", &add, &ope);
		did(add, ope);
	}
	q = head->next;
	while (q != NULL)
	{
		printf("%d", q->num);
		q = q->next;
	}
	return 0;
}