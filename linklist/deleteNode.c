

#include <stdio.h>
#include <stdlib.h>

struct ListNode {
	int val;
	struct ListNode *next;
};



void deleteNode(struct ListNode *node)
{

	struct ListNode *current;

	current = node;

	while(current->next->next != NULL)
	{
		current->val = current->next->val;
		current = current->next;

	}
	current->val = current->next->val;
	free(current->next);
	current->next = NULL;
}


void print_node(struct ListNode *node)
{
	struct ListNode *current;
	current = node;

	putchar('[');
	while(current->next != NULL)
	{
		printf("%d ,", current->val);
		current = current->next;
	}

	printf("%d ,", current->val);
	putchar(']');
	putchar('\n');


}



int main(int argc, char **argv)
{
	struct ListNode *head;

	head = (struct ListNode *)malloc(sizeof(struct ListNode));
	head->next = (struct ListNode *)malloc(sizeof(struct ListNode));
	head->next->next = (struct ListNode *)malloc(sizeof(struct ListNode));
	head->next->next->next = (struct ListNode *)malloc(sizeof(struct ListNode));
	
	head->next->next->next->next = NULL;

	head->val =4;
	head->next->val = 5;
	head->next->next->val = 1;
	head->next->next->next->val = 9;

	deleteNode(head->next);

	print_node(head);
	return 0;

}
