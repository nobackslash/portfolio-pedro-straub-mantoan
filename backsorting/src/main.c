#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <time.h>

#include "bubbleSort.c"
#include "selectionSort.c"
#include "insertionSort.c"
#include "mergeSort.c"
#include "quickSort.c"

// ----- Misc -----
int orderFile(char *fileName)
{
    // Variable definition
    size_t bufferSize; // Create an empty variable. Will receive the file's buffer size
    FILE *targetFile;  // Create a variable to receive the instance of the file
    char *storage;

    targetFile = fopen(fileName, "r");   // Starts the instance of the file
    bufferSize = __fbufsize(targetFile); // Receives the file's buffer size

    char content[bufferSize]; // Create a char variable using the file's buffer size

    if (!targetFile) // Checks if the file even exists
    {
        printf("Error: File not found with name \"%s\"\n", fileName);
        fclose(targetFile);
        return 1;
    }

    int index = 0;
    while (fscanf(targetFile, "%s", content) != EOF)
    { // Iters through the file until there's an EOF
        // storage[index] = content; // Stores the content (i don't know)
        index++;
    }

    // ignorar TUDO abaixo
    printf("%c\n", storage);

    int teste = sizeof(storage);
    printf("%d", teste);

    for (int i = 0; i < teste; i++)
    {
    }

    fclose(targetFile);

    // FILE *newFile;

    // newFile = fopen("result.txt", "w");
    // fwrite(storage, sizeof(int), 10, newFile);
    // fclose(newFile);

    return 0;
}

void elapsedTime(time_t start, time_t stop)
{
    double res;
    res = ((double)(stop - start) * 1000.0) / CLOCKS_PER_SEC;
    printf("Sort time: %.3f ms\n", res);
}

// ----- Sorts -----

void sortFunction(int *vect)
{
    time_t start, stop;
    double elapsed;
    int option;
    char *unorderedList;
    printf("\nStarting file ordering... I assume there is a file called \"target.txt\" and it is populated with unordered numbers...\n");
    printf("Select the ordering algorithm:\n1 - Bubble Sort\n2 - Insertion Sort\n3 - Selection Sort\n4 - Merge Sort\n5 - Quick Sort\n");

    scanf("%d", &option);

    switch (option)
    {
    case 1: // Bubble Sort
        start = clock();
        bubbleSort(vect);
        stop = clock();
        elapsedTime(start, stop);
        break;

    case 2: // Insertion Sort
        start = clock();
        insertionSort(vect);
        stop = clock();
        elapsedTime(start, stop);
        break;

    case 3: // Selection Sort
        start = clock();
        selectionSort(vect);
        stop = clock();
        elapsedTime(start, stop);
        break;

    case 4: // Merge Sort
        start = clock();
        // mergeSort(vect);
        stop = clock();
        elapsedTime(start, stop);
        break;

    case 5: // Quick Sort
        start = clock();
        quickSort(vect);
        stop = clock();
        elapsedTime(start, stop);
        break;

    default:
        printf("No valid option selected... Exiting...\n");
    }
    return;
}

int main()
{
    int debugVect[10] = {0, 5, 7, 3, 4, 1, 8, 9, 2, 6};
    sortFunction(debugVect);
}
