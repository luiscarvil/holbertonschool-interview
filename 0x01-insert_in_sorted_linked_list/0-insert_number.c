#include <stdlib.h>
#include "lists.h"
listint_t *insert_node(listint_t **head, int number){
    
    listint_t *current = *head;
    listint_t *new_node = malloc(sizeof(listint_t));
listint_t *previous = NULL;

    new_node->n = number;
    if (head == NULL || !number)
        return (NULL);
    else {
        while (current != NULL){
            if (new_node->n < current->next->n){
                previous = current->next;
                 current->next = new_node;
                 new_node->next =  previous;
                 return (new_node);
            }
            current = current->next;
        }
    }
    return (NULL);
}