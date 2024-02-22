#include "../includes/push_swap.h"

void	rra(t_stack *stack_t)
{
    t_node *first;
    t_node *beforlast;
    t_node *last;

    if (stack_t->a == NULL || (stack_t->a)->next == NULL)
        return;
    first = stack_t->a;
    // trouver le dernier élément de la pile.
    last = stack_t->a;
    while(last->next != NULL)
    {
        last = last->next;
    }
    
    beforlast = stack_t->a;
    while( beforlast->next != last)
    {
        beforlast = beforlast->next;
    }

    // Décaler tous les éléments d'une position vers le bas.
    last->next = first;    
    stack_t->a = last;   
    beforlast->next = NULL;
 
    printf("raa\n");
}