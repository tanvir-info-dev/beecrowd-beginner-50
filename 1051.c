#include <stdio.h>
int main()
{
    double n;
    scanf("%lf",&n);
    if(n<=2000.00){
        printf("Isento\n");
    }
    else if(n<=3000.00){
        n=n-2000.00;
        printf("R$ %.2lf\n",0.08*n);
    }
    else if(n<=4500.00){
        n=n-3000.00;
        printf("R$ %.2lf\n",0.18*n+80);
    }
    else if(n>4500.00){
        n=n-4500.00;
        printf("R$ %.2lf\n",0.28*n+80+270);
    }

    return 0;
}