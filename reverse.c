// coded by Banibrata Mandal
// im21219
// banibrata.creator@gmail.com | www.facebook.com/banibrata.imposter | www.twitter.com/banibrata-21219
// www.banibrata-21219.blogspot.com | 9046632178 | 7812928261

#include<stdio.h>
#include<string.h>

void main()
{
  char word[20],word2[20];
  int cnt=0,i;
  
  printf("Enter a word\n");
  scanf("%s",word);
  
  for(i=strlen(word)-1;i>=0;i--)
  {
    word2[cnt++]=word[i];
  }
   word2[cnt]='\0'; 
  printf("After reverse - %s\n",word2);
}
