#include <stdio.h>
int main()
{
    int X,Y,mx,min,sum=0;
    scanf("%d%d",&X,&Y);
    if(X>=Y){
        mx=X;
        min=Y;
    }
    else{
        mx=Y;
        min=X;
    }
    for(int i=min+1 ; i<mx ; i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }
    printf("%d\n",sum);

    return 0;
}