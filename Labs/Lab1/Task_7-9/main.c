#include "linked_list.h"

int main(int argc, char **argv)
{

    int n = argc - 1;

    LIST list = createList();

    for (int i = 0; i < n; i++)
    {

        insertFirst(createNode(atoi(argv[i + 1])), list);
    }

    printList(list);

    insertFirst(createNode(12), list);

    printList(list);

    insertAfter(4, createNode(4), list);

    printList(list);

    deleteFirst(list);

    printList(list);

    deleteAt(2, list);

    printList(list);

    printf("%d\n",Search(list, 5));

    Rotate(list, 3);

    printList(list);
}