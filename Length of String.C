#include<stdio.h>
#include<string.h>
int main()
{
  char str[100];
  printf("enter a string:");
  fgets(str,sizeof(str),stdin);
    if(str[strlen(str)-1]=='\n')
    {
      str[strlen(str-1)]='\0';
      int length=strlen(str);
      printf("The lengthof the string is:%d\n",length);
    }
    
}
