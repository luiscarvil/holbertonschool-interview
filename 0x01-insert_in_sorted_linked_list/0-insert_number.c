#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
listint_t *insert_node(listint_t **head, int number){
    
    listint_t *current = *head;
    listint_t *new_node = malloc(sizeof(listint_t));
    listint_t *previous = NULL;

    if (head == NULL || !number)
        return (NULL);
    new_node->n = number;
    while (current){
                
            if (current->next == NULL  || (new_node->n <= current->next->n && new_node->n >= current->n)){
                if (new_node->n >= current->n){
                previous = current->next;
                 current->next = new_node;
                 new_node->next =  previous;
                }
                 return (new_node);
            }
            current = current->next;
        }
    return (new_node);
}