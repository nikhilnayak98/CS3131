/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - BFS
*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

int del(struct node** head, int* element);
int add(struct node** head, int element);

void main()
{
    int Num, i, j;
    printf("Enter number of nodes\n");
    scanf("%d", &Num);

    int adj[Num][Num];

    printf("Enter adjacency matrix\n");
    for(i = 0; i < Num; i++)
    {
        for(j = 0; j < Num; j++)
        {
            scanf("%d", &adj[i][j]);
        }
    }


    struct node *Queue = NULL;

    enum { ready, waiting, processed };
    int status[Num];
    for(i = 0; i < Num; i++)
    {
        status[i] = ready;
    }

    add(&Queue, 0);
    status[0] = waiting;
    int node = NULL;
    printf("BFS traversing\n");
    while(Queue != NULL)
    {
        del(&Queue, &node);
        printf("%d ", node);
        status[node] = processed;

        for(i = 0; i < Num; i++)
        {
            if(adj[node][i] == 1 && status[i] == ready)
            {
                add(&Queue, i);
                status[i] = waiting;
            }
        }
    }
    printf("\n");
}

int del(struct node** head, int* element)
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

int add(struct node** head, int element)
{
    if((*head) == NULL)
    {
        *head = (struct node*)malloc(sizeof(struct node));
        (*head)->next = NULL;
        (*head)->data = element;
        return 0;
    }
    struct node* temp = *head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = (struct node*)malloc(sizeof(struct node));
    if(temp->next == NULL)
        return 1;
    temp = temp->next;
    temp->data = element;
    temp->next = NULL;
    return 0;
}