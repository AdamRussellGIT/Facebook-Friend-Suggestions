#include <stdio.h>
#include <string.h>
#include "suggest.h"

void suggest(int choice, char users[][80], char friendsUser1[][80], char friendsUser2[][80], char friendsUser3[][80], char friendsUser4[][80], char friendsUser5[][80], char friendsUser6[][80], char friendSuggestions[][80], int numFriendSuggestions[5], int numFriendsPerUser[6])
{
    int count=0, i, j;
    
    //depending on choice, we search through the respective friendsUser array
    //e.g. if the user picks user  in choose();, we enter case 0 in this function
    //this means we check every person in friendsUser1 to see if they're friends with User 1, and if they're not, we place them in the friendSuggestions array
    
    switch (choice) {
        case 0:
            for (i=0;i<6;i++)
            {
                if (strcmp(users[i], users[choice]) != 0)
                {
                    if (strcmp(users[i], friendsUser1[0]) && strcmp(users[i], friendsUser1[1]) && strcmp(users[i], friendsUser1[2]) && strcmp(users[i], friendsUser1[3]) && strcmp(users[i], friendsUser1[4]))
                    {
                        strcpy(friendSuggestions[count++], users[i]);
                    }
                }
            }
            break;
            
        case 1:
            for (i=0;i<6;i++)
            {
                if (strcmp(users[i], users[choice]) != 0)
                {
                    if (strcmp(users[i], friendsUser2[0]) && strcmp(users[i], friendsUser2[1]) && strcmp(users[i], friendsUser2[2]) && strcmp(users[i], friendsUser2[3]) && strcmp(users[i], friendsUser2[4]))
                    {
                        strcpy(friendSuggestions[count++], users[i]);
                    }
                }
            }
            break;
            
        case 2:
            for (i=0;i<6;i++)
            {
                if (strcmp(users[i], users[choice]) != 0)
                {
                    if (strcmp(users[i], friendsUser3[0]) && strcmp(users[i], friendsUser3[1]) && strcmp(users[i], friendsUser3[2]) && strcmp(users[i], friendsUser3[3]) && strcmp(users[i], friendsUser3[4]))
                    {
                        strcpy(friendSuggestions[count++], users[i]);
                    }
                }
            }
            break;
            
        case 3:
            for (i=0;i<6;i++)
            {
                if (strcmp(users[i], users[choice]) != 0)
                {
                    if (strcmp(users[i], friendsUser4[0]) && strcmp(users[i], friendsUser4[1]) && strcmp(users[i], friendsUser4[2]) && strcmp(users[i], friendsUser4[3]) && strcmp(users[i], friendsUser4[4]))
                    {
                        strcpy(friendSuggestions[count++], users[i]);
                    }
                }
            }
            break;
            
        case 4:
            for (i=0;i<6;i++)
            {
                if (strcmp(users[i], users[choice]) != 0)
                {
                    if (strcmp(users[i], friendsUser5[0]) && strcmp(users[i], friendsUser5[1]) && strcmp(users[i], friendsUser5[2]) && strcmp(users[i], friendsUser5[3]) && strcmp(users[i], friendsUser5[4]))
                    {
                        strcpy(friendSuggestions[count++], users[i]);
                    }
                }
            }
            break;
            
        case 5:
            for (i=0;i<6;i++)
            {
                if (strcmp(users[i], users[choice]) != 0)
                {
                    if (strcmp(users[i], friendsUser6[0]) && strcmp(users[i], friendsUser6[1]) && strcmp(users[i], friendsUser6[2]) && strcmp(users[i], friendsUser6[3]) && strcmp(users[i], friendsUser6[4]))
                    {
                        strcpy(friendSuggestions[count++], users[i]);
                    }
                }
            }
            break;
            
    }
    
    //placing the number of friends of each friend suggestion into a new array, numFriendsPerUser
   for (i=0;i<6;i++)
   {
       for (j=0;j<6;j++)
       {
           if ((strcmp(friendSuggestions[i], users[j]) == 0))
           {
               numFriendSuggestions[i] = numFriendsPerUser[j];
               break;
           }
       }
   }
}




