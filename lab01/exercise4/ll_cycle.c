#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head){
    /* TODO: Implement ll_has_cycle */

    if (head == NULL) {
        return 0;
    }
    node *slow_ptr = head;
    node *fast_ptr = head->next;
    while (fast_ptr != NULL && fast_ptr->next != NULL) {

        // Advance the pointers.
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next->next;

        // Check if they point to the same node.
        if (slow_ptr == fast_ptr) {
            return 1;  // The list is cyclic.
        }
    }
    return 0;

}
