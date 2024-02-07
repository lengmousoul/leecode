#include "two_search.h"
int two_search(vector<int>& nums, int target)
{
    int left = 0;
    int right = nums.size() -1;
    while(left <= right )
    {
        int middle = left + ((right - left) / 2);  // 防止溢出 ，等价于 （left + right）/ 2
        if(nums[middle] > target)
        {
            left = middle - 1;
        }
        else if(nums[middle] < target)
        {
            right = middle + 1; 
        }
        else 
        {
            return middle;
        }
    }
    return -1;
}


void two_search_test()
{
    cout <<"please input n " << endl;
    int n = 0;
    cin >> n;
    vector<int> nums(n);
    cout <<"please input n element " << endl;
    for(int i = 0 ; i < n ; i++)
    {   int j = 0;
        cin >> j;
        nums.push_back(j);
    }
    cout <<"please input target " << endl;
    int target;
    cin >>target;
    int res = two_search(nums, target);
    cout <<res <<endl;

}



int main(int argc, char const *argv[])
{
    two_search_test();
    return 0;
}
