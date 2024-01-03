#include <stdio.h>

int arr[100], size, i;

void bubbleSort(int arr[])
{
    int j, temp, swap = 0;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap = 1;
            }
        }
        if (swap == 1)
        {
            break;
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

    bubbleSort(arr);

    printf("\nThe elements of array after sorting are : ");
    displayAll();

    return 0;
}
