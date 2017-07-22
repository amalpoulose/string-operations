/* To remove the consecutive spaces in a given string line
By Amal Poulose    +919446047003    amalpoulose1995@gmail.com*/
#include<stdio.h>
int main(void)
{
	int i,j; 
	char str[100],ch;
        printf("\n----------------------------------------------------------\n");
	printf("Enter the string  :");
	scanf("%[^\n]",str);
        printf("\n----------------------------------------------------------\n");
	printf("Entered string is :  %s\n",str);
        printf("\n----------------------------------------------------------\n");
	for(i=0;str[i];)             //Rotates entire string length
		if(str[i]==' ' && str[i+1]==' ')//check for consecutive spaces
			for(j=i+1;str[j];j++)   //Loop to delete extra spaces 
				str[j]=str[j+1];
		else i++;
	printf("The new string   :   %s\n",str);
        printf("\n----------------------------------------------------------\n");
	return(0);
}
                                                                  
