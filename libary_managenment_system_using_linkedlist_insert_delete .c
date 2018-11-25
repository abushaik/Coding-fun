#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
struct Node
{
    char data[100];
    char data1[100];
    int data2;
    struct Node *next;
};
void push(struct Node** head_ref, int new_data,char name[100],char name1[100])
{
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	strcpy(new_node->data,name);
	strcpy(new_node->data1,name1);
	new_node->data2 = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("Id No: %d\n", node->data2);
        printf("Book Name: %s\n", node->data);
        printf("Book Name Writer: %s\n", node->data1);
        node = node->next;
    }
}
void deleteNode(struct Node **head_ref, int key)
{
    struct Node* temp = *head_ref, *prev;
	if (temp != NULL && temp->data2 == key)
	{
		*head_ref = temp->next;
		free(temp);
		return;
	}
	while (temp != NULL && temp->data2 != key)
	{
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL) return;
	prev->next = temp->next;
	free(temp);
}


int main()
{
    printf("\n");
    printf("\t\t\t\t\t Library Management System.\n");
    printf("\n");
    struct Node* head = NULL;
    char writer[100];
    char author[100];
    int i,x,j;
    int n=5;
    for(i=0;i<2;i++){
        printf("Enter Book Name:\n");
        gets(writer);
        printf("Enter the book author name:\n");
        gets(author);
        push(&head, i,writer,author);
    }
    printf("\n Created Linked list is: \n");
    printList(head);
    printf("\nWant to delete any data?\npress 1 for yes\n");
    scanf("%d",&x);
    if(x==1){
        printf("Enter the id number you want to delete:\n");
        scanf("%d",&j);
        deleteNode(&head,j);
    }

    printf("\n After delete Linked list is: ");
    printList(head);
    return 0;
}
