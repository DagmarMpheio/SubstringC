#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define tam 60
int ocorrencia(char a[], char b[]){
    int i=0,j=0,tA,tB,x=0,aux_i=0,qnt=0;
    tA=strlen(a);
    tB=strlen(b);
    for(;i<tA;i++){
       if(b[0]==a[i]){
        aux_i=i;
        x=0;
        for(j=0;j<tB;j++){
        if(b[j]==a[aux_i]){
            x++;
        }
        aux_i++;
       }
       if(x>=tB)
        qnt++;
       }
    }
    if(qnt>=1)
         printf("A cadeia aparece %d vezes ",qnt);
    else
        printf("A string nao contem a cadeia");
}
int main()
{
    char x[tam],y[tam];
    printf("Digite uma string: \n");
    gets(x);
    printf("Digite uma string para ver a ocorrencia: \n");
    gets(y);
    ocorrencia(x,y);
    return 0;
}
