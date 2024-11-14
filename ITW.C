// deletion of a linked list //
#include <stdio.h>
#include <stdlib.h>
void delete_at_beg();

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head, *nnode, *temp;

    head = 0;
    int choice, count;
    while (choice)
    {
        nnode = (struct node *)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d", &nnode->data);
        nnode->next = NULL;
        if (head == NULL)
        {
            head = temp = nnode;
        }
        else
        {

            temp->next = nnode;
            temp = nnode;
        }
        printf("do you want to continue(0,1)?");
        scanf("%d", &choice);
    }
    delete_at_beg();
    temp = head;
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
        count++;
    }

    return 0;
}

void delete_at_beg()
{

    struct node *head, *temp;
    if (head == 0)
    {
        printf("node is empty");
    }
    else
    {
        temp = head;
        head = temp->next;
        free(temp);
    }
}
