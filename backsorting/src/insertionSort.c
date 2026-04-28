#ifndef insertionSort_c
#define insertionSort_c

void *insertionSort(int *vect)
{
    printf("\n-- Insertion Sort --\n");

    int i, j, aux;

    for (i = 1; i < 10; i++)
    {
        aux = vect[i];                  // aux é o valor do segundo item
        j = i - 1;                      // j é o index antes do aux
        while (j >= 0 && vect[j] > aux) // enquanto o valor anterior for maior que o valor atual
        {
            vect[j + 1] = vect[j]; // valor atual (menor) vira o valor anterior (maior)
            j--;
        }
        vect[j + 1] = aux; // j + 1 agora é o valor anterior por causa do j--
    }
}

#endif