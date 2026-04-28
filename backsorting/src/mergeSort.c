#ifndef mergeSort_c
#define mergeSort_c

void *mergeSort(int *vect, int inicio, int fim)
{
    if (inicio < fim)
    {
        int meio = (inicio + fim) / 2;
        mergeSort(vect, inicio, meio); // temida recursão...
        mergeSort(vect, meio, fim);
        merge(vect, inicio, meio, fim);
    }
}

void *merge(int *vect, int inicio, int meio, int fim)
{
}

#endif