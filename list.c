#include <stdio.h>
#include <stdlib.h>

int main (void)
{

/* 
    int list[3];

    list[0] = 1;
    list[1] = 2;
    list[3] = 3;
 */
    int *list = malloc(3 * sizeof(int));
    if(list == NULL)
    {
        return 1;
    }
    list[0] = 1;
    list[1] = 2;
    list[3] = 3;

    int *tmp = realloc(list, 4 * sizeof(int)); //realocates the memory
    if(tmp == NULL)
    {
        free(list);
        return 1;
    }

    /* 
    //NOT NEEDED WHEN USING realloc(list, 4* sizeof(int)). It auto copies the data to the new location
    for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }
 */
    tmp[3] = 4;

    free(list);

    list = tmp;

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    // free(list);
}