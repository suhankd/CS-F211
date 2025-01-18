#include "linked_list.h"

LIST createList()
{

    LIST newList = (LIST)malloc(sizeof(struct linked_list));
    newList->count = 0;
    newList->head = NULL;
    return newList;
}

NODE createNode(int ele)
{

    NODE newNode = (NODE)malloc(sizeof(struct node));
    newNode->ele = ele;
    newNode->next = NULL;
    return newNode;
}

void printList(LIST l1)
{

    NODE temp = l1->head;

    if (temp == NULL)
    {

        printf("List is empty!\n");
    }
    else
    {

        while (temp != NULL)
        {

            printf("%d ", temp->ele);
            temp = temp->next;
        }
        printf("\n");
    }
}