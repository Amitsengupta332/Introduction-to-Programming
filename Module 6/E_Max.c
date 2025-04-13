#include <stdio.h>
int main()
{
    int n;
     scanf("%d", &n);
     int mx=0;
     for (int i = 1; i <=n; i++)
     {
        int val;
        scanf("%d", &val);
        if(val > mx){
            mx = val;
        }
        /* code */
     }
     printf("%d", mx);
     
    return 0;
}