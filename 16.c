/* To mix 2 strings into another string
   By Amal Poulose +919446047003  amalpoulose1995@gmail.com*/
#include<stdio.h>
int main(void)
{
	int i=0,j=0,k=0;
	char str1[50],str2[50],str[100];
	printf("\n-------------------------------------------------------------\n");
	printf("\nenter the first string 1  :");
	scanf("%s",str1);
	printf("\nenter the second string 2 :");
	scanf("%s",str2);
	printf("\n-------------------------------------------------------------\n");
	printf("\nThe string 1  :    %s\n",str1);
	printf("\nThe string 2  :    %s\n",str2);
	printf("\n-------------------------------------------------------------\n");

	for( ;str1[j]||str2[k]; ) // loop to mix 2 strings into another destination string
	{ if(str1[j]){          // check whether 1st string is finished  
			     str[i]=str1[j];      // copy one character from 1st string to destination string
			     i++;j++;
		     }
	if(str2[k]){          // check whether 2nd string is finished
		str[i]=str2[k];     // copy one character from 2nd string to destination string
		i++;k++;
	}
	}
	str[i]='\0';
	printf("\nDestination string  :    %s\n",str);
	printf("\n-------------------------------------------------------------\n");
	return(0);
}

