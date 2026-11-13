#include <stdio.h>
int main()
{
    int s, e, count = 0;
    scanf("%d%d", &s, &e);
    if (s == 0 && e == 0)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else
    {
        for (int i = s; i != e; i++)
        {
            if (i == 24)
            {
                i = 0;
            }
            count++;
        }
        printf("O JOGO DUROU %d HORA(S)\n", count);
    }

    return 0;
}