#include <bits/stdc++.h>
using namespace std;
int main()
{
  char ch[100],temp[100];
  FILE *fp,*fpp;
  fp = fopen("output.txt","r+");
  fpp = fopen("ciphertext2.txt","w+");
  int i=0 ; 
  while(i<500){
    strcpy(ch,temp);
    fscanf(fp,"%s",ch);
    if(strlen(ch) == 16){
        fprintf(fpp, "%s\n",ch);
        i++ ;
    }
  }
  fclose(fp) ;
  fclose(fpp) ;
}
