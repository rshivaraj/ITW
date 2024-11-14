#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = 0;

void push(int x)
{
    struct node *nnode;
    nnode = (struct node *)malloc(sizeof(struct node));

    nnode->data = x;
    nnode->next = top;
    top = nnode;
}

void display()
{

    struct node *temp;
    temp = top;
    if (top == NULL)
    {
        printf("list is empty");
    }
    else
    {

        while (temp != 0)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}

void peek()
{
    if (top == 0)
    {
        printf("empty");
    }
    else
    {
        printf("top element is %d\n", top->data);
    }
}
void pop()
{
    struct node *temp;
    temp = top;
    if (top == 0)
    {
        printf("list is empty");
    }
    else
    {
        printf("pop element is  %d\n", top->data);
        top = top->next;
        free(temp);
    }
}

int main()
{
    push(2);

    push(5);
    push(29);
    display();
    peek();
    pop();
    peek();
   
    return 0;
}
