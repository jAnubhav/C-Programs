#include <stdio.h>

int arr[100], size, i;

void insertElement()
{
    int pos, elem, flag = 0;
    printf("\nInserting Element\n");
    while (1)
    {
        printf("\nEnter Position : ");
        scanf("%d", &pos);
        if (pos < size)
        {
            break;
        }
        else
        {
            printf("\nPosition cannot be greater than size.\n");
        }
    }

    printf("\nEnter Element : ");
    scanf("%d", &elem);

    for (i = size++; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = elem;

    printf("\nElement Inserted Successfully.\n");
}

void deleteElement()
{
    int elem, flag = 0;
    printf("\nDeleting Element\n\nEnter Element : ");
    scanf("%d", &elem);

    for (i = 0; i < size; i++)
    {
        if (arr[i] == elem)
        {
            flag = 1;
            size--;
        }
        arr[i] = arr[i + flag];
    }

    printf("\n%s.\n", (flag) ? "Element Deleted Successfully" : "Element Not Found");
}

void displayAll()
{
    printf("\nThe elements of the array are : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int ch, flag = 1;
    printf("Enter the size : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", (arr + i));
    }

    while (flag)
    {
        printf("\nMenu-driven program:\n1) Insert Element\n2) Delete Element\n3) Display Elements\n4) Exit");
        printf("\n\nEnter choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insertElement();
            break;
        case 2:
            deleteElement();
            break;
        case 3:
            displayAll();
            break;
        case 4:
            printf("\nExiting...");
            flag = 0;
            break;
        default:
            printf("\nEnter a Valid Option\n");
        }
    }
    return 0;
}
