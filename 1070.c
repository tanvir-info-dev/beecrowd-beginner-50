#include <stdio.h>
int main()
{
    int X,count=0;
    scanf("%d",&X);
    for(int i=X ; ; i++){
        if(i%2!=0){
            printf("%d\n",i);
            count++;
        }
        if(count==6){
            break;
        }
    }

    return 0;
}