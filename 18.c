/* To reverse each characters in each word
   By Amal Poulose   +919446047003    amalpoulose1995@gmail.com*/
#include<stdio.h>
int main(void)
{
int i,j,l,start,end;
char str[100];
printf("\n-------------------------------------------------------\n");
printf("Enter the string   : ");
scanf("%[^\n]",str);
printf("\n-------------------------------------------------------\n");
printf("\nEntered string   : %s",str);
for(l=0;str[l];l++);//Loop to find  length of the string 
for(start=end=0;end<=l;end++)// Loop to find each word in the string
{
  if(str[end]!=' ' && str[end]!='\0')
      continue;
  for(i=start,j=end-1;i<j;i++,j--) //Loop to reverse each word in the string
         str[i]=str[i]+str[j]-(str[j]=str[i]);
   
  start=end+1;     
   
 }
printf("\n-------------------------------------------------------\n");
printf("\nNew string is   : %s\n",str);
printf("\n-------------------------------------------------------\n");
return(0);
}
