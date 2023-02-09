#include <stdio.h>
#include <ctype.h> 
#include <string.h> 
#include <stdlib.h>
int main() {
   int upper = 0, lower = 0;
   char ch[80];
   int i;
 
   printf("\nEnter The String : ");
   gets(ch);

int v,c,vh,d,s,o;
    o=v=c=vh=d=s=0;
    for(i=0;ch[i]!='\0';++i)
    {
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' || ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U')
            ++v;
        else if((ch[i]>='a'&& ch[i]<='z') || (ch[i]>='A'&& ch[i]<='Z'))
            ++c;
        else if(ch[i]>='0'&&c<='9')
            ++d;
        else if (ch[i]==' ')
            ++s;
    }
   
    printf("\nnumber of digits: %d\n",d);


   i = 0;
   while (ch[i] != ' ') {
      if (ch[i] >= 'A' && ch[i] <= 'Z')
         upper++;
      if (ch[i] >= 'a' && ch[i] <= 'z')
         lower++;
      i++;
   }

 int len=strlen(ch);
int nchar = 0; 
for(int i = 0; i != len; i++) {
   if(ch[i] == ' ') {
       nchar++;
   }
}
printf("number of white spaces = %d\n", nchar);

printf("\nUppercase Letters : %d", upper);
   printf("\nLowercase Letters : %d", lower);
 
   return (0);
}
