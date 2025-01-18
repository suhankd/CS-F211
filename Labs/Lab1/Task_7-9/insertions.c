#include "linked_list.h"

void insertAfter(int searchEle, NODE n1, LIST l1)
{

    if (l1->head == NULL)
    {

        l1->head = n1;
        n1->next = NULL;
        l1->count++;
    }
    else
    {

        NODE temp = l1->head;
        NODE prev = temp;

        while (temp != NULL)
        {

            if (temp->ele == searchEle)
            {

                n1->next = temp->next;
                temp->next = n1;
                l1->count++;
                return;
            }

            prev = temp;
            temp = temp->next;
        }

        printf("Element not found!\n");
        return;
    }
}

void deleteAt(int index, LIST l1)
{

    if (index > l1->count)
    {

        printf("Index is greater than list size!\n");
    }

    NODE temp = l1->head;
    NODE prev = temp;

    for (int i = 0; i <= index; i++)
    {

        prev = temp;
        temp = temp->next;
    }

    prev->next = temp->next;
    free(temp);
    l1->count--;
}

void insertFirst(NODE n1, LIST l1)
{

    if (l1->head == NULL)
    {

        l1->head = n1;
        n1->next = NULL;
        l1->count++;
    }
    else
    {

        n1->next = l1->head;
        l1->head = n1;
        l1->count++;
    }
}

void deleteFirst(LIST l1)
{

    if (l1->head == NULL)
    {

        printf("List is already empty!\n");
    }
    else
    {

        NODE temp = l1->head;
        l1->head = temp->next;
        free(temp);
        l1->count--;
    }
}

int Search(LIST l1, int data)
{

    int k;

    for (NODE temp = l1->head; temp != NULL; temp = temp->next)
    {

        if (temp->ele == data)
        {
            return k;
        }

        k++;
    }

    printf("Element not found / List is empty.\n");
}