#include<stdio.h>
int main()
{
    int n,j,i;                             
    printf("输入图案一半的高度n:");
    scanf("%d",&n);

    for(i = 1;i <= n;i++)           
    {
        for(j = 1;j <= n - 1 + i;j++)       
        {
            if(j == n - 1 -i+2 || j == n - 1 - i + 2 * i )
                printf(" *");
            else
                printf("  ");
        }
        printf("\n");
    }
    for(i = n - 1 ;i >= 1;i--)              
    {                            
        for(j=1;j<=n - 1 +i;j++)        
            if(j == n - 1 -i+2 || j == n - 1 -i + 2 * i )
                printf(" *");
            else
                printf("  ");
        printf("\n");
    }

    
    return 0;
}

