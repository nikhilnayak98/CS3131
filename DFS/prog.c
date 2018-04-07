/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - DFS
*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

int push(struct node** head, int element);
int pop(struct node** head, int* element);

void main()
{
    int Numi, i, j;
    printf("Enter number of nodes\n");
    scanf("%d",&Num);

    int adj[Num][Num];

    printf("Enter adjacency matrix\n");
    for(i = 0; i < Num; i++)
    {
        for(j = 0; j < Num; j++)
        {
            scanf("%d", &adj[i][j]);
        }
    }

    struct node *Stack = NULL;

    enum { ready, waiting, processed };
    int status[Num];
    for(i = 0; i < Num; i++)
    {
        status[i] = ready;
    }

    push(&Stack, 0);
    status[0] = waiting;
    int node = NULL;
    printf("DFS traversing\n");
    while(Stack != NULL)
    {
        pop(&Stack, &node);
        printf("%d ", node);
        status[node] = processed;

        for(i = 0; i < Num; i++)
        {
            if(adj[node][i] == 1 && status[i] == ready)
            {
                push(&Stack, i);
                status[i] = waiting;
            }
        }
    }
    printf("\n");
}

int push(struct node** head, int element)
{
    struct node* temp;
    temp = *head;
    *head = (struct node*)malloc(sizeof(struct node));
    if(head == NULL)
        return 1;
    (*head)->data = element;
    (*head)->next = temp;
    return 0;
}

int pop(struct node** head, int* element)
{
    if(*head == NULL)
        return 1;
    *element = (*head)->data;
    struct node* temp;
    temp = *head;
    *head = (*head)->next;
    free(temp);
    return 0;
}