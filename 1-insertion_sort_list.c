#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending order
 *                        using the Insertion sort algorithm
 * @list: Pointer to the pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;

    listint_t *curr = (*list)->next;

    while (curr != NULL)
    {
        listint_t *temp = curr->prev;
        int value = curr->n;

        while (temp != NULL && temp->n > value)
        {
            temp->next->n = temp->n;
            temp = temp->prev;
        }

        if (temp == NULL)
            (*list)->n = value;
        else
            temp->next->n = value;

        curr = curr->next;

        print_list(*list);
    }
}

