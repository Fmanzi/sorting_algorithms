#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/* Structures */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/* Prototypes */
/* Task 0 - Bubble sort */
void bubble_sort(int *array, size_t size);

/* Task 1 - Insertion sort */
void insertion_sort_list(listint_t **list);

/* Task 2 - Selection sort */
void selection_sort(int *array, size_t size);

/* Task 3 - Quick sort */
void quick_sort(int *array, size_t size);

/* Provided Functions for Printing */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

#endif /* SORT_H */

