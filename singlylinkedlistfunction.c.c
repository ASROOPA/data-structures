#include <stdio.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node node_function;
void display();
node_function *head,*first,*temp;
int main(void) {
	int n1,n2;
	head=((node_function*)malloc(sizeof(node_function)));
	first=((node_function*)malloc(sizeof(node_function)));
	scanf("%d%d",&n1,&n2);
	head->data=n1;
	head->next=first;
	first->data=n2;
	first->next=NULL;
	temp=head;
	display();
	return 0;
}
void display()
{
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
