#include "push_swap.h"

void error_message_and_free(t_stack *s,message)
{
    if (message)
        write(2,message,ft_strlen(message));
    if (s != NULL)
    {
        if (s->a != NULL)
            free(s->a);
        if (s->b != NULL)
            free(s->b);
        if (s->now != NULL)
            free(s->now);
        if (s != NULL)
            free (s);
    }
    exit (1);
} 