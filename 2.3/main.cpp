#include <iostream>

struct list
{
	int field;
	struct list* next;
	struct list* prev;
};
struct list* init(int a)  
{
	struct list* lst;
	lst = (struct list*)malloc(sizeof(struct list));
	lst->field = a;
	lst->next = lst; 
	lst->prev = lst; 
	return(lst);
}
struct list* addelem(list* lst, int number)
{
	struct list* temp, * p;
	temp = (struct list*)malloc(sizeof(list));
	p = lst->next; 
	lst->next = temp; 
	temp->field = number; 
	temp->next = p; 
	temp->prev = lst; 
	p->prev = temp;
	return(temp);
}
struct list* deletelem(list* lst)
{
	struct list* prev, * next;
	prev = lst->prev; 
	next = lst->next; 
	prev->next = lst->next; 
	next->prev = lst->prev; 
	free(lst); 
	return(prev);
}
void listprint(list* lst)
{
	struct list* p;
	p = lst;
	do {
		//p = p->prev;
		//printf("%d ", p->field); �������� �������
		printf("%d ", p->field); 
		p = p->next; 
	} while (p != lst); 
}
struct list* swap(struct list* lst1, struct list* lst2, struct list* head)
{
	struct list* prev1, * prev2, * next1, * next2;
	prev1 = lst1->prev; 
	prev2 = lst2->prev; 
	next1 = lst1->next; 
	next2 = lst2->next; 
	if (lst2 == next1) 
	{
		lst2->next = lst1;
		lst2->prev = prev1;
		lst1->next = next2;
		lst1->prev = lst2;
		next2->prev = lst1;
		prev1->next = lst2;
	}
	else if (lst1 == next2)  
	{
		lst1->next = lst2;
		lst1->prev = prev2;
		lst2->next = next1;
		lst2->prev = lst1;
		next1->prev = lst2;
		prev2->next = lst1;
	}
	else 
	{
		prev1->next = lst2;
		lst2->next = next1;
		prev2->next = lst1;
		lst1->next = next2;
		lst2->prev = prev1;
		next2->prev = lst1;
		lst1->prev = prev2;
		next1->prev = lst2;
	}
	if (lst1 == head)
		return(lst2);
	if (lst2 == head)
		return(lst1);
	return(head);
}
int main()
{
	int n;
	std::cin >> n;
	list * head = init(rand());
	for (int i = 0; i < n; i++)
		addelem(head, rand() % 10000);
	listprint(head);
	deletelem(head->next);
	std::cout << std::endl;
	listprint(head);
	swap(head->prev, head->next, head);
	std::cout << std::endl;
	listprint(head);
}