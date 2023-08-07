
#ifndef MAIN_H
#ifndef MAIN_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @h: header of list
 *  
 * Return: always (0).
*/

size_t print_list(const list_t *h);
{
    int num;

    for (num = 0; num != NULL; num++)
{        if (h ->str == NULL)
        printf("[0],(nil)\n");
    else ("[%d] %s\n", h->len, h->str);
        h = h->next;
}
return (num);
}

