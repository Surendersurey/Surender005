#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int n , counti = 0 , countj = 0;
    scanf("%s",str);
    scanf("%d",&n);
    
    for(int i = 0 ;counti < (n-1); i++)
    {
        static int j = 0;
        for( ; countj < n ; j++)
        {
            if(str[j] != '\0')
            {
                printf("%c",str[j]);
                countj++;
            }
            else
            {
                printf("*");
                countj++;
            }
        }
        counti++;
        printf("\n");
        countj = 0;
    }
    return 0;
}

