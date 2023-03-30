#ifndef LISTS_H
#define LISTS_H
/**
 * struct list_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list mode structure
 * for alx project
 */
typedef struct list_s
{
 char *str;
 unsigned int len;
 struct list_s *next;
}list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif

