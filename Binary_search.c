#include <stdio.h>
const int LENGTH = 10;
int Binary_search(int array[], int LB, int UB, int search);

int main(){
    int i, search, location, LB, UB, list[LENGTH];
    // Creating a list of numbers
    printf("Create a list of %d numbers in increasing order : ",LENGTH);
    for(i = 1; i <= LENGTH; i++){
        scanf("%d",&list[i]);
    }
    // Printing the created list of numbers 
    printf("You created the following list!\n");
    for(i = 1; i <= LENGTH; i++){
        printf("%d\t",list[i]);
    }
    // Getting a number from a user to search in the list
    printf("\nWhat's the number you want to search in the list? ");
    scanf("%d",&search);

    LB = 1;
    UB = LENGTH;
    location = Binary_search(list, LB, UB, search);
    if(location != -1){
        printf("%d found at location %d in the list.\n",search, location);
    }else{
        printf("%d is not found in the list.\n",search);
    }
    return 0;
}
// Main logic for Binary search
int Binary_search(int array[], int LB, int UB, int search){
    int MID = (LB + UB)/2 ;
    int loc;
    while(LB <= UB && array[MID] != search){
        if(search < array[MID]){
            loc = Binary_search(array, LB, MID-1, search);
        }else if(search > array[MID]){
            loc = Binary_search(array, MID+1, UB, search);
        }
        return loc;
    }
    if(search == array[MID]){
        return MID;
    }else{
        return -1;
    }
}