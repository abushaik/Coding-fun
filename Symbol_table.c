#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node{
    int data;
    char b;
    char c;
    struct node *next;
};
struct node *head=NULL;
void insert_data(int x,char e,char d)
{
    struct node* temp;
    temp= (struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->b=e;
    temp->c=d;
    temp->next=head;
    head = temp;
}

void print_all()
{
    struct node* carent_node=head;
    while(carent_node != NULL)
    {
        printf("%d\t",carent_node->data);
        printf("%c\t",carent_node->b);
        printf("%c\n",carent_node->c);
        carent_node=carent_node->next;
    }
}

int main()
{
    insert_data(10,'!','@');
    print_all();
}

