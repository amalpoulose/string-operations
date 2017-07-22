/* To reverse word in a string 
   By Amal Poulose +919446047003  amalpoulose1995@gmail.com*/
#include<stdio.h>
int main(void)
{
	int i,j,l,start,end;
	char str[100];
	printf("\n------------------------------------------------------\n");
	printf("\nEnter the string  :");
	scanf("%[^\n]",str);
	printf("\n------------------------------------------------------\n");
	printf("\nThe string entered is  :  %s\n",str);
	for(i=0;str[i];i++);  // loop to find length of the string
	l=i;
	for(i=i-1,j=0;j<i;j++,i--)  //Loop to reverse the entire string
		str[i]=str[i]+str[j]-(str[j]=str[i]);

	for(start=end=0;end<=l;end++)  // Loop find word in string 
	{
		if(str[end]!=' ' && str[end]!='\0') // skip iteration for characters other than space and \0
			continue;
		for(i=start,j=end-1;i<j;i++,j--)    // Loop to reverse each word
			str[i]=str[i]+str[j]-(str[j]=str[i]);

		start=end+1;     
	}
	printf("\n------------------------------------------------------\n");
	printf("\nNew string is  :%s\n",str);
	printf("\n------------------------------------------------------\n");
	return(0);
}
