#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
    int data;
    struct NODE *next;
} NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}
void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;
    PNODE temp = *Head;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}
void Display(PNODE Head)
{
    printf("Elements in the linked list are: ");
    while (Head != NULL)
    {
        printf("%d->", Head->data);
        Head = Head->next;
    }
    printf("NULL");
}
int Count(PNODE Head)
{
    int iCnt = 0;
    while (Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 51);
    InsertFirst(&First, 61);
    InsertFirst(&First, 71);

    Display(First);

    InsertLast(&First, 51);
    InsertLast(&First, 61);
    InsertLast(&First, 71);
    printf("\n\n");
    Display(First);

    iRet = Count(First);
    printf("\nThe count of nodes is: %d", iRet);
    return 0;
}
