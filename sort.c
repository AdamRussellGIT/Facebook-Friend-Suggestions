#include <stdio.h>
#include <string.h>
#include "sort.h"

void sort(int numFriendSuggestions[5], char friendSuggestions[][80], char swappingString[10][80])
{   
    int i, j, maxIndex;
    int swap=0, swapCount=0; //Used to index swap, makes sure swapping array works correctly
    
    //sorts friendSuggestions[] and numFriendSuggestions[] numerically
    for (i=0;i<6;i++)
    {
        maxIndex=i;
        
        for (j=i+1;j<6;j++)
        {
            if (numFriendSuggestions[maxIndex] < numFriendSuggestions[j])
            {
                maxIndex=j;
            }
        }    
                
        swap = numFriendSuggestions[maxIndex];
        numFriendSuggestions[maxIndex] = numFriendSuggestions[i];
        numFriendSuggestions[i] = swap;
        
        strcpy(swappingString[i], friendSuggestions[maxIndex]);
        strcpy(friendSuggestions[maxIndex], friendSuggestions[i]);
        strcpy(friendSuggestions[i], swappingString[i]);
    }
   
   //sorts friendSuggestions[] and numFriendSuggestions[] alphabetically
   for(i=0;i<5;i++)
   {
       for(j=i+1;j<4;j++)
       {
           if((numFriendSuggestions[i] == numFriendSuggestions[j]) && (friendSuggestions[j][0] != '\0'))
           {
               if (strcmp(friendSuggestions[i], friendSuggestions[j]) > 0) //if friendSuggestions[j] is smaller alphabetically than frienSuggestions[i], swap them
               {
                   strcpy(swappingString[swapCount], friendSuggestions[i]);
                   strcpy(friendSuggestions[i], friendSuggestions[j]);
                   strcpy(friendSuggestions[j], swappingString[swapCount]);
                   swapCount++;
               }
           }
           
           else
           {
               break;
           }
       }
   }
}
