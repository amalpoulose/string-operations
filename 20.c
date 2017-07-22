/* To replace word in a string with the replacing word 
   By Amal Poulose            +919446047003 amalpoulose1995@gmail.com*/
#include<stdio.h>
int main(void)
{
	int i,j,k,l,start,end;
	char str1[100],str2[100],str3[50];
	printf("\n---------------------------------------------------------------------\n");
	printf("enter the first string   :");   //    the string to be added
	scanf(" %[^\n]",str1);
	printf("enter the second string  :");   
	scanf(" %[^\n]",str2);                 // the  string to be modified
	printf("enter the word to be replaced :");
	scanf(" %s",str3);                     // the string to be  replaced
	printf("\n---------------------------------------------------------------------\n");
	printf("The orginal string      :   %s\n",str2);
	printf("The word to be replaced :   %s\n",str3);
	printf("The replacing  word     :   %s\n",str1);
	printf("\n---------------------------------------------------------------------\n");
	for(l=0;str2[l];l++);                          // to find length of string2
	for(start=end=0;end<=l;end++)                  // loop to split each word in string
	{
		if(str2[end]!=' ' && str2[end]!='\0')   //skip iteration for characters other than space  and '\0'
			continue;
		for(i=start,j=0;i<=end-1;i++,j++)      // loop to find the matching word
			if(str2[i]!=str3[j])
				break;
		if(i==end && !str3[j])
			break;
		start=end+1;     
	}
	if(end!=l+1)
	{
		for(i=start;i<end;i++)                // loop to delete the matching word
			for(j=start;str2[j];j++)
				str2[j]=str2[j+1];



		for(i=0;str1[i];i++);                 // loop to find length of replacing word
		for(i=i-1;i>=0;i--)                   // loop to insert replacing word
		{
			for(k=l;start<=k;k--)         //loop to shift characters to right
				str2[k+1]=str2[k];
			l++;
			str2[start]=str1[i];
		}
		printf("\nNew string is  : %s\n",str2);
		printf("\n---------------------------------------------------------------------\n");
	}
	else
	{
		printf("\nthe word is not found\n");
		printf("\n---------------------------------------------------------------------\n");
	}
	return(0);
}
