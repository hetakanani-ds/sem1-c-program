#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){

    int i,j,len;
    char str[10];

    printf("\n enter any string::");
    gets(str);

    len=strlen(str);

    for(i=0;i<len;i++){
        for(j=0;j<=i;j++){
      printf("%c",str[i]);    
        }
      printf("\n");
      
    }
    
}
