#include "monty.h"

int main(void)
{
    stack_t *top = NULL; /* Initialize an empty stack */

    /* Push some values onto the stack */
    push(&top, 10);
    push(&top, 20);

    /* Call the e_add function to add the top two elements */
    e_add(&top, 1); /* Assuming line number is 1 */

    /* Print the resulting stack */
    e_pall(top, 1);

    /* Clean up and free memory (optional, depending on your application) */
    free_stack(top);

    return 0;
}
