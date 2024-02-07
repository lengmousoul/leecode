#include "min_sub_array.h"
#include"stdio.h"
int  min_sub_array(int * nums, int n , int target)
{
    int sum = 0;
    int i = 0;
    int ret = 10000;
    for(int j = 0 ; j < n; j++)
    {
        sum += nums[j];
        while(sum >= target)
        {
            int length = j - i +1;
            ret = ret <  length ? ret : length;
            sum-= nums[i++];
        }
    }
    return ret == INT_MAX? 0 : ret;
}



void min_sub_array_test()
{
    char len;
    printf("please input n\r\n");
    scanf("%d",&len);
    int nums[len];
    printf("please input1 array\r\n");
    for(int i = 0; i < len; i++)
    {   char j;
        scanf("%d",&j);
        nums[i] = j;
    } 
    printf("please input target\r\n");
    int target;
    scanf("%d",&target);
    int min_num = min_sub_array(nums, len, target);
    printf("min_sub_array_num = %d",min_num);

}