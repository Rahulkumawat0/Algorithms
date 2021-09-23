#include <stdio.h>
const int LENGTH = 10;
void Insertion_sort(int array[], int len);

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

    // Calling Insertion sort function...
    Insertion_sort(list, LENGTH);

    // Printing the sorted list...
    printf("\nSorted list of %d numbers is as follows :\n", LENGTH);
    for (i = 1; i <= LENGTH; i++)
    {
        printf("%d\t", list[i]);
    }
    return 0;
}
// Main Logic for Insertion sort...
void Insertion_sort(int array[], int len)
{
    int i, j, temp = 0;
    for (i = 1; i <= len; i++)
    {
        temp = array[i];
        for (j = i; j > 0 && array[j - 1] > temp; j--)
        {
            array[j] = array[j - 1];
        }
        array[j] = temp;
    }
}