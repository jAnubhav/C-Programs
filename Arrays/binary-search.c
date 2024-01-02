#include <stdio.h>

int arr[100], size, i;

int binarySearch(int elem)
{
    int low = 0, upp = size - 1, mid;
    while (low <= upp)
    {
        mid = (low + upp) / 2;
        if (arr[mid] == elem)
        {
            return mid;
        }
        else if (arr[mid] > elem)
        {
            upp = mid - 1;
        }
        else
        {
            low = mid + 1;
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

    if ((pos = binarySearch(elem)) == -1)
    {
        printf("\nElement Not Found");
    }
    else
    {
        printf("\nElement Found at index %d", pos);
    }

    return 0;
}
