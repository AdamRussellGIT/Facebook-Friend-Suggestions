#include <stdio.h>
#include <string.h>
#include "choose.h"

int choose(int numOfUsers){
    int ans;
    
    printf("\n\nPlease select which user you would like to provide friend suggestions for.\n");
    printf("(E.g. Enter '1' for your first user, '2' for your second user etc): \n");
    scanf("%d", &ans);
    
    //if the user enters a number greater than the number of users or less than or equal to zero, we make them choose again, until they pick a vlaid number
    //i feel this is better than just force closing the program
    while (ans > numOfUsers || ans <= 0)
    {
        printf("You have not inputted that many users, please choose again: ");
        scanf("%d", &ans);
        
    }
    
    ans = ans-1;
    
    //we return our answer into the variable choice
    return ans;
}