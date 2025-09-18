#include <stdio.h>
int main(void)
{
    int n , T[6] = {1,-4,3,4,-33,2};

    printf("Le tableau modifié : \n");
    for(n=0;n<6;n++)
    {
        if(T[n] < 0)
        {
            T[n] = 0;
        }
        printf("%d\n",T[n]);
    }


    return 0;
}