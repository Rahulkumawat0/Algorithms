#include <stdio.h>
const int LENGTH = 10;
void Bubble_sort(int array[], int len);

int main()
{
    int list[LENGTH], i;
    // Getting user input...
    printf("What's the %d number of list that you wants to be sorted? ", LENGTH);
    for (i = 1; i <= LENGTH; i++)
    {
        scanf("%d", &list[i]);
    }
    // Priniting the unsorted list, entered by the user...
    printf("You entered the following list!\n");
    for (i = 1; i <= LENGTH; i++)
    {
        printf("%d\t", list[i]);
    };
    // Calling Bubble sort function...
    Bubble_sort(list, LENGTH);
    // Printing sorted list...
    printf("\nSorted list of %d numbers is as follows :\n", LENGTH);
    for (i = 1; i <= LENGTH; i++)
    {
        printf("%d\t", list[i]);
    }
    return 0;
}
// Main logic for bubble sort...
void Bubble_sort(int array[], int len)
{
    int i, j, temp = 0;
    for (i = 1; i < len; i++)
    {
        for (j = 1; j <= len - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
            }
        }
    }
}