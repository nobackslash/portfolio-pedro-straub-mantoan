#ifndef selectionSort_c
#define selectionSort_c

void *selectionSort(int *vect)
{
    int i, j, aux, min;

    for (i = 0; i < 10; i++) // itera sobre todos os valores
    {
        min = i;                     // inicializa a min como se o primeiro ja fosse o menor (pra ter uma referencia)
        for (j = i + 1; j < 10; j++) // itera novamente
        {
            if (vect[j] < vect[min]) // se o item da segunda for menor que o min, ele vira o novo min
                min = j;
        }
        aux = vect[i]; // faz o esquema de variavel pivô pra realocar a variavel
        vect[i] = vect[min];
        vect[min] = aux;
    }
}

#endif