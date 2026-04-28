#ifndef bubbleSort_c
#define bubbleSort_c

void *bubbleSort(int *vect)
{
    printf("\n-- Bubble Sort --\n");
    // The bubble sort algorithm compares the (j) item with the next value on the array (j+1),
    // changing it's position if higher

    int i, j, aux;

    for (i = 0; i < 10 - 1; i++)
    {
        for (j = 0; j < 10 - 1 - i; j++)
        {
            if (vect[j] > vect[j + 1])
            {
                aux = vect[j];
                vect[j] = vect[j + 1];
                vect[j + 1] = aux;
            }
        }
    }
    return 0;
}

#endif