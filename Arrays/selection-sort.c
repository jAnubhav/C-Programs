#include <stdio.h>

int arr[100], size, i;

void selectionSort()
{
    int j, key, temp;
    for (i = 0; i < size - 1; i++)
    {
        key = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[key] > arr[j])
            {
                key = j;
            }
        }
        if (arr[key] != arr[i])
        {
            temp = arr[i];
            arr[i] = arr[key];
            arr[key] = temp;
        }
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

    selectionSort();

    printf("\nThe elements of array after sorting are : ");
    displayAll();

    return 0;
}
