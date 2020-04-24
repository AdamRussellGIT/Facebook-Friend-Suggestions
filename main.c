#include <stdio.h>
#include <string.h>
#include "input.h"
#include "choose.h"
#include "suggest.h"
#include "sort.h"

//The array containing facebook users
  char users[6][80];
//Friend Suggestions array
  char friendSuggestions[5][80];
  //Number of friends of each friend suggestion array
  int numFriendSuggestions[5];
  
  //Friends for User 1
  char friendsUser1[4][80];
  //Friends for User 2
  char friendsUser2[4][80];
  //Friends for User 3
  char friendsUser3[4][80];
  //Friends for User 4
  char friendsUser4[4][80];
  //Friends for User 5
  char friendsUser5[4][80];
  //Friends for User 6
  char friendsUser6[4][80];
  
  //The total number of facebook users (Note it can be less than 6)
  int numOfUsers =0;
  
  //The total number of friends for each user (Note that less than 4 friends can be provided for each facebook user)
  int numFriendsPerUser[6];
  
  //The function to provide users as input
  int inputFacebookUsers();
  
  //Array to hold strings that are being swapped
  char swappingString[10][80];
 
 

int main(void)
{
    int choice, swap, maxIndex;
    int i, j, count=0, friendCount=0, swapCount=0;;
    char swapString[80];
  // invoke here the function to provide users as input
   numOfUsers = inputFacebookUsers();
  
   printf("%d Facebook users have been provided as input",numOfUsers);
  
   //choose(); function lets the program-user select which inputted user they wish to find friend suggestions for
   choice = choose(numOfUsers);
   
   printf("You have chosen to give friend suggestions for user %d, %s", choice+1, users[choice]);
   
   //suggest(); involves placing all potential friend suggestions in the friendSuggestions[] array. No sorting is done here.
   suggest(choice, users, friendsUser1, friendsUser2, friendsUser3, friendsUser4, friendsUser5, friendsUser6, friendSuggestions, numFriendSuggestions, numFriendsPerUser);
   
   //sort(); involves sorting the possible friend suggestions by first, the number of friends that each friend suggestion has,
        //and secondly, via alphabetical order for the ones that have the same number of friends
   sort(numFriendSuggestions, friendSuggestions, swappingString);
   
   //if there are no friend suggestions possible, we let the user know, otherwise, we print 1 or two friends suggestions, depending on how many the program finds.
   if (friendSuggestions[0] == '\0')
   {
       printf("There are no friend suggestions for this user.");
   }
   
   else
   {
       printf("Here are some friend suggestions: \n%s%s\n", friendSuggestions[0], friendSuggestions[1]);
   }
   
  return 0;
}


/**
 * This function asks the users to provide a list of facebook users.
 * For each facebook users it will be necessary to add a set of friends
 */
int inputFacebookUsers(){
    int i=0;
    while(i< 6){
        printf("%s", "\nInput the next Facebook User \n");
        fgets(users[i],80,stdin);
        //Checks whether a carriage return symbol was provided as input
        if (users[i][0] == '\n')
        {
            break;
        }
        switch(i){
            case 0: numFriendsPerUser[i]= inputFriends(friendsUser1);
                    break;
            case 1: numFriendsPerUser[i]= inputFriends(friendsUser2);
                    break;
            case 2: numFriendsPerUser[i]= inputFriends(friendsUser3);
                    break;
            case 3: numFriendsPerUser[i]= inputFriends(friendsUser4);
                    break;
            case 4: numFriendsPerUser[i]= inputFriends(friendsUser5);
                    break;
            case 5: numFriendsPerUser[i]= inputFriends(friendsUser6);
            default: break;
        }
        i++;
    }
    return i;
}



