/* To display given string is anagram or not
By Amal Poulose   +919446047003  amalpoulose1995@gmail.com*/
#include<stdio.h>
void non_alphabet_remove_and_sorting(char str[]); //function declaration
int main(void)
{
int i;
char str1[100],str2[100];
printf("\n----------------------------------------------------------\n");
printf("\nenter the first string   :  ");
scanf("%[^\n]",str1);
printf("enter the second string  :  ");
scanf(" %[^\n]",str2);
printf("\n----------------------------------------------------------\n");
printf("\nThe first string   :  %s",str1);
printf("\nThe first string   :  %s\n",str2);
printf("\n----------------------------------------------------------\n");
printf("\n\" %s \" and \" %s \" are   : ",str1,str2);
non_alphabet_remove_and_sorting(str1);//function calling for string 1
non_alphabet_remove_and_sorting(str2);//function calling for string 2

for(i=0;str1[i];i++)   //loop to find both strings are equal
   if(str1[i]!=str2[i])
        break;
if(str1[i]==str2[i])
    printf(" anagram\n");
else
    printf(" not anagram\n");
printf("\n----------------------------------------------------------\n");
return(0);
}

void non_alphabet_remove_and_sorting(char str[]) //function definition
{
  int i,j;

  for(i=0;str[i];i++)         //Loop to remove non alphabets
       if((str[i]<65 || str[i]>90) &&(str[i]<97 ||str[i]>122))//check for non alphabet
       {    for(j=i;str[j];j++)
                str[j]=str[j+1];
           i--;
       }
  for(i=0;str[i+1];i++)       //Loop to sort the new string (selection sort)
       for(j=i+1;str[j];j++)
            if(str[i]>str[j])
               str[i]=str[i]+str[j]-(str[j]=str[i]);
}
