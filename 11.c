/*To Delete the duplicate elements in a string
By Amal Poulose   +919446047003  amalpoulose1995@gmail.com*/
#include<stdio.h>
int main(void)
{
	int i,j,k;
        char str[100];
        printf("\n--------------------------------------------------------------\n");
	printf("enter the string  :");
	scanf("%s",str);
        printf("\n--------------------------------------------------------------\n");
	printf("\nstring entered is :         %s\n",str);
        printf("\n--------------------------------------------------------------\n");
       for(i=0;str[i];i++)         // Loop rotates for entire string length   
         for(j=i+1;str[j];)
           { 
             if(str[i] == str[j])   //check for duplicates
              {
                 for(k=j;str[k];k++) //Loop to delete the duplicate character
                     str[k]=str[k+1];
              }
              else
                j++;
            }
	printf("\nString after deleting duplicates :    %s\n",str);
        printf("\n--------------------------------------------------------------\n");
	return(0);
}

