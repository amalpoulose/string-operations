/* Program to reverse digits in a string
By Amal Poulose 9446047003      amalpoulose1995@gmail.com*/
#include<stdio.h>
int main(void)
{
	char str[100];
	int start,end,i,j;
        printf("\n---------------------------------------------------------\n");
	printf("enter the string  :");
	scanf("%[^\n]",str);
        printf("\n---------------------------------------------------------\n");
        printf("String entered is   :  %s",str); 
	for(start=end=0;str[end];end++)
	{ if(str[end]<48||str[end]>57)// Check for non digits
		continue;
		start=end;//assign starting index of digits to start variable
		for(i=start;str[i];i++)//Loop to find ending index of digit
			if(str[i]<48||str[i]>57)
				break;
		end=i-1;//Assign ending index to end variable
		for(i=start,j=end;i<j;i++,j--)//Loop to reverse the digits
			str[i]^=str[j]^=str[i]^=str[j];
	}
        printf("\n---------------------------------------------------------\n");
	printf("The new string is    :%s \n",str);
        printf("\n---------------------------------------------------------\n");
	return(0);
}       

