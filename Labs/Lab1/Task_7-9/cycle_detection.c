#include "linked_list.h"

bool cycleDetect(LIST l1) {

    NODE fast = l1->head;
    NODE slow = fast;

    while((fast != NULL) && (fast->next != NULL)) {

        if(fast == slow) {

            return true;

        }

        fast = fast->next->next;
        slow = slow->next;

    }

    return false;

}