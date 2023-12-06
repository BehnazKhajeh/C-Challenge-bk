#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
@brief struct a linklist
*/
typedef struct list list;

struct list {
    char* data;
    list* next;
};

/**
@brief make a new list
*/
list* create_list(void) {
    list* ll = malloc(sizeof(list));
    if (ll != NULL) {
        ll->data = NULL;
        ll->next = NULL;
    }
    return ll;
}

/**
@brief add string to list
@param the name of list and the item gives to function
*/
int add_to_list(list* ll, char* item) {
    list* newNode = malloc(sizeof(list));
    if (newNode != NULL) {
        newNode->data = strdup(item);

        if (ll->next == NULL) {
            ll->next = newNode;
            newNode->next = NULL;
        } else {
            list* current = ll->next;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
            newNode->next = NULL;
        }
        return 0;  // Successful
    }
    return -1;  // Error
}

/**
@brief remove a item from list
@param the list
remove the item infront of list
@return NUll if list empty
*/
char* remove_from_list(list* ll) {
    if (ll->next != NULL) {
        list* nodeToRemove = ll->next;
        char* data = nodeToRemove->data;
        ll->next = nodeToRemove->next;
        free(nodeToRemove);
        return data;
    }
    return NULL;
}

/**
@brief printing all of the list
@return print the items if is not empty
*/
void print_list(list* ll) {
    list* current = ll->next;
    while (current != NULL) {
        printf("%s\n", current->data);
        current = current->next;
    }
}

/**
@brief flush the list
@return the number that it says that how many items flushed
@ the list can be used again
*/
int flush_list(list* ll) {
    int count = 0;
    list* current = ll->next;
    while (current != NULL) {
        list* next = current->next;
        free(current->data);
        free(current);
        current = next;
        count++;
    }
    ll->next = NULL;
    return count;
}

/**
@brief free the list
all of the list is empty and free and it was deallocatted
the list is unusable now
*/
void free_list(list* ll) {
    flush_list(ll);
    free(ll);
}

/*int main() {
    list* ll = create_list();
    add_to_list(ll, "Hello");
    add_to_list(ll, "Behnaz");
    add_to_list(ll, ":)");
    print_list(ll);
    printf("Removed: %s\n", remove_from_list(ll));
    print_list(ll);
    flush_list(ll);
    free_list(ll);

    return 0;
}*/
