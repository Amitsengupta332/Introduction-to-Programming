#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    
    for (int i = 1; i <= t; i++)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        int total_farmer = m1 + m2;
        int new_days =  (m1 * d)/ total_farmer;
    
        int few_days = d - new_days;
        
        printf("%d\n", few_days);
        /* code */
    }
    
  
    return 0;
}