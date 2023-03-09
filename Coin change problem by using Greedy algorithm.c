#include<stdio.h>
int ans[100];
int findMinCoins(int coins[], int size,  int value)
{
    int i, count = 0;
    for(i = 0; i < size; i++)
    {
        while(value >= coins[i])
        {
            value -= coins[i];
            ans[count] = coins[i];
            count++;
        }
        if(value == 0)
            break;
    }
    return count;
}
int main()
{
    int coins[100] = {1000,500,100,50,20,10,5,2,1};
    int value, i;
    printf("Input Total Amount:");
    scanf("%d",&value);
    int size = sizeof(coins)/sizeof(coins[0]);
    int MinCount = findMinCoins(coins,size,value);
    printf("Total Coins Needed = %d\n",MinCount);
    printf("Coins are:\t");
    for(i = 0; i < MinCount; i++)
    {
        if(ans[0]=ans[i])
        {
            printf("%d ", ans[i]);
        }
    }
    return 0;
}
