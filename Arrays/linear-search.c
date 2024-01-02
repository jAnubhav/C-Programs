#include <stdio.h>

int arr[100], size, i;

int linearSearch(int elem)
{
    for (i = 0; i < size; i++)
    {
        if (arr[i] == elem)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int elem, pos;
    printf("Enter the size : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", arr + i);
    }

    printf("\nEnter element to be searched : ");
    scanf("%d", &elem);

    if ((pos = linearSearch(elem)) == -1)
    {
        printf("\nElement Not Found");
    }
    else
    {
        printf("\nElement Found at index %d", pos);
    }

    return 0;
}
