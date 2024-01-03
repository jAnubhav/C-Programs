#include <stdio.h>

int arr[100], size, i;

void insertionSort()
{
    int i, key, j;
    for (i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void displayAll()
{
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    printf("Enter the size : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", arr + i);
    }

    printf("\nThe elements of array before sorting are : ");
    displayAll();

    insertionSort();

    printf("\nThe elements of array after sorting are : ");
    displayAll();

    return 0;
}
