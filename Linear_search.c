#include <stdio.h>
int linear_search(int array[],int found);
const int NUMBER = 10;

int main(){
    int list[NUMBER];
    int i, search, location;
    // Getting a list of numbers from a user
    printf("Please enter %d numbers to create a list : ",NUMBER);
    for(i=0; i<NUMBER; i++){
        scanf("%d",&list[i]);
    }
    // Printing the entered numbers into the screen
    printf("You create the following list!\n");
    for(i=0; i<NUMBER; i++){
        printf("%d\t",list[i]);
    }
    // Wanting a number to find in the list
    printf("\nWhat's the number you want to find in the list? ");
    scanf("%d",&search);

    location = linear_search(list,search);
    if(location != -1){
        printf("%d Found at location %d.\n",search,location);
    }else{
         printf("%d is not Found in the list.",search);
    }
    return 0;
}
// Main logic of linera search algorithm
int linear_search(int array[],int search){
    int i;
    for(i=0; i<NUMBER; i++){
        if(array[i]==search){
            return i+1;
        }
    }
    return -1;
}