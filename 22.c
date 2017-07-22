/* To Decrypt the given string according to the key input from user
   By Amal Poulose   +919446047003   amalpoulose1995@gmail.com*/
#include<stdio.h>
int main(void)
{
	int i,j,k,l,m,key,t=0;
	char str[10000];
	printf("\n-------------------------------------------------------------\n");
	printf("enter a string  : ");
	scanf("%[^\n]",str);
	// fgets(str,100,stdin);
	// gets(str);
	for(l=0;str[l];l++);
	printf("\n-------------------------------------------------------------\n");
	printf("enter the key   :");
	scanf(" %d",&key);
	printf("\n-------------------------------------------------------------\n");
	printf("\nThe string entered is  : %s\n",str);
	printf("\nThe key    entered is  : %d\n",key);
	printf("\n-------------------------------------------------------------\n");
	for(i=0,j=1,k=key;str[i];i++)                            // Loop to decrypt the string
	{
		if(((str[i]<65) || (str[i]>90))&&((str[i]<97) ||(str[i]>122)))//skip iteration for non alphabet
			continue;
		if(j==k && i<l-1 )                                   // check the alphabet number matches to key
		{  
			for(t=0,m=i+1;((str[m]<65) || (str[m]>90))&&((str[m]<97) ||(str[m]>122));t++,m++);//loop to count sucessive non alphabet


			str[i]=str[i]+str[i+t+1]-(str[i+t+1]=str[i]);             //swaping the character match with key
			k+=key;
		}
		j++;
	}
	printf("\nThe decrypted string with key = %d is    :  %s",key,str);
	printf("\n-------------------------------------------------------------\n");
	return(0);
}

         
  
  
  
