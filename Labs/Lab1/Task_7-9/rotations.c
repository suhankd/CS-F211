#include "linked_list.h"

void Rotate(LIST l1, int rotateBy)
{

    if (l1->head == NULL)
    {

        printf("List is empty!\n");
        return;
    }

    rotateBy = rotateBy % (l1->count);

    NODE start = l1->head;
    NODE end = start;

    for (int i = 0; i < rotateBy; i++)
    {
        end = start;
        start = start->next;
    }

    NODE temp1 = l1->head;
    NODE temp2 = temp1;

    while(temp1 != NULL) {

        temp2 = temp1;
        temp1 = temp1->next;

    }  

    temp2->next = l1->head;
    end->next = NULL;

    l1->head = start;

}