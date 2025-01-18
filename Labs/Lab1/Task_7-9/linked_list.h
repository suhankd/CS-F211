#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node * NODE;

struct node {

    int ele;
    NODE next;

};

typedef struct linked_list * LIST;

struct linked_list {

    NODE head;
    int count;

};

// Constructors

LIST createList();

NODE createNode(int ele);

// Task 7

void insertAfter(int searchEle, NODE n1, LIST l1);

void deleteAt(int index, LIST l1);

void insertFirst(NODE n1, LIST l1);

void deleteFirst(LIST l1);

int Search(LIST l1, int data);

void printList(LIST l1);

// Task 8

void Rotate(LIST l1, int rotateBy);

// Task 9

bool cycleDetect(LIST l1);

#endif