#include <stdio.h>
#include <stdlib.h>
#include "list.h"


void test_list_operations() {
    list* ll = create_list();

    add_to_list(ll, "Hello");
    add_to_list(ll, "Behnaz");
    add_to_list(ll, ":)");
    add_to_list(ll, "bye");
    add_to_list(ll, "Beni");

    printf("Printing the list:\n");
    print_list(ll);

    char* item = remove_from_list(ll);
    if (item != NULL) {
        printf("Removed: %s\n", item);
        free(item);
    }

    print_list(ll);

    printf("Flushing the list...\n");
    int flushed_items = flush_list(ll);
    printf("%d items flushed\n", flushed_items);
    print_list(ll);


    free_list(ll);
}

int main() {
    printf("Testing linked list operations...\n");
    test_list_operations();

    return 0;
}

