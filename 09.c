/* To remove the character given by user from the given string*/
#include<stdio.h>
int main(void)
{
int i,j; 
char str[100],ch;
printf("\n------------------------------------------------\n");
printf("Enter the string     :");
scanf("%s",str);
printf("Enter the character  :");
scanf(" %c",&ch);
printf("\n------------------------------------------------\n");
printf("The string entered      :  %s\n",str);
printf("The character entered   :  %c\n",ch);
printf("\n------------------------------------------------\n");
for(i=0;str[i];)
 if(str[i]==ch)
   for(j=i;str[j];j++)
         str[j]=str[j+1];
   else i++;
printf("\nThe new string   :   %s\n",str);
printf("\n------------------------------------------------\n");
return(0);
}
                                                                  
