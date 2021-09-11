#include <stdio.h>
const int LENGTH = 10;
void Selection_sort(int array[], int len);

int main()
{
    int i, list[LENGTH];

    // Getting user input...
    printf("What's the %d number of list that you wants to be sorted? ", LENGTH);
    for (i = 1; i <= LENGTH; i++)
    {
        scanf("%d", &list[i]);
    }

    // Printing the unsorted list, entered by the user...
    printf("You entered the following list!\n");
    for (i = 1; i <= LENGTH; i++)
    {
        printf("%d\t", list[i]);
    }

    // Calling Selection sort function...
    Selection_sort(list, LENGTH);

    // Printing the sorted list...
    printf("\nSorted list of %d numbers is as follows :\n", LENGTH);
    for (i = 1; i <= LENGTH; i++)
    {
        printf("%d\t", list[i]);
    }
    return 0;
}
// Main Logic for selection sort...
void Selection_sort(int array[], int len)
{
    int i, j, min, temp = 0;
    for (i = 1; i < len; i++)
    {
        min = i;
        for (j = i + 1; j <= len; j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }
    }
}