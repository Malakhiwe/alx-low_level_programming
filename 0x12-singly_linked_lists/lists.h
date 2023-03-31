#ifndef LIST_H
#define LIST_H
/**
 * struct list_s - This is the singly list object.
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 */

typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
int _putchar(char c);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif
