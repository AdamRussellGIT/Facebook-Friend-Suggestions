#include <stdio.h>
#include <string.h>
#include "input.h"

/**
 * This method asks the user to provide as input the friends
 * of a Facebook user.
 * 
 * Input: 
 * friends, contain the names of friends provided as input
 * 
 * Output:
 * Returns the number of friends provided as input. Note that
 * a user may decide to input less than 6 friends. 
 */
int inputFriends(char friends[][80]){
    int i = 0;
    while (i < 4)
    {
        printf("\nEnter friend %d for the user\n", i+1);
        fgets(friends[i], 80, stdin); 
        if (friends[i][0] == '\n')
        {
            return i;;
        }
        i++;
    }
    return i;
}


