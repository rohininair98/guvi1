#include <stdio.h>

int main()
{
 char s[10];
 scanf("%s",s);
 int len=strlen(s);
 for(int i=len;i>=0;i--)
 {
 if(s[i]!='a'&& s[i]!='e'&& s[i]!='i'&& s[i]!='o'&& s[i]!='u'&& s[i]!='A'&& s[i]!='E'&& s[i]!='I'&& s[i]!='O'&& s[i]!='U')
 {
 printf("%c",s[i]);
 }
 }	    return 0;
}
