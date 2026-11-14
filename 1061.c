#include <stdio.h>
int main()
{
    char d1[101],d2[101],colon;
    int sday,eday,shour,ehour,smin,emin,ssec,esec,day=0,hour=0,min=0,sec=0;
    scanf("%s %d %d %c %d %c %d %s %d %d %c %d %c %d",&d1,&sday,&shour,&colon,&smin,&colon,&ssec,&d2,&eday,&ehour,&colon,&emin,&colon,&esec);
    if(eday==sday+1){
        day=1;
    }
    else{
        for(int i=sday+1 ; i<eday ; i++){
            day++;
        }
    }
    for(int i=shour ; ; i++){
        if(i==24){
            i=0;
        }
        if(i==ehour){
            break;
        }
        hour++;
    }
    for(int i=smin ; ; i++){
        if(i==60){
            i=0;
        }
        if(i==emin){
            break;
        }
        min++;
    }
    for(int i=ssec ; ; i++){
        if(i==60){
            i=0;
        }
        if(i==esec){
            break;
        }
        sec++;
    }
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",day,hour,min,sec);

    return 0;
}