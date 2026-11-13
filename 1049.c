#include <stdio.h>
#include <string.h>
int main()
{
    char s1[101],s2[101],s3[101];
    char x[101]="vertebrado";
    char y[101]="invertebrado";
    char a[101]="ave";
    char b[101]="mamifero";
    char c[101]="inseto";
    char d[101]="anelideo";
    char p[101]="carnivoro";
    char q[101]="onivoro";
    char r[101]="herbivoro";
    char s[101]="hematofago";
    scanf("%s%s%s",&s1,&s2,&s3);
    if(strcmp(s1,x)==0){
        if(strcmp(s2,a)==0){
            if(strcmp(s3,p)==0)
                printf("aguia\n");
            else
                printf("pomba\n");
        }
        else{
            if(strcmp(s3,q)==0)
                printf("homem\n");
            else
            printf("vaca\n");
        }
    }
    else{
        if(strcmp(s2,c)==0){
            if(strcmp(s3,s)==0)
                printf("pulga\n");
            else
                printf("lagarta\n");
        }
        else{
            if(strcmp(s3,s)==0)
                printf("sanguessuga\n");
            else
            printf("minhoca\n");
        }

    }
    
    
    return 0;
}