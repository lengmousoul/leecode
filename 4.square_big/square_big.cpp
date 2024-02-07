#include "square_big.h"
//给你一个按 非递减顺序 排序的整数数组 nums，返回 每个数字的平方 组成的新数组，要求也按 非递减顺序 排序
// 输入：nums = [-4,-1,0,3,10]
// 输出：[0,1,9,16,100]
// 解释：平方后，数组变为 [16,1,0,9,100]，排序后，数组变为 [0,1,9,16,100]
vector<int> square_big(vector<int>& nums)
{   
    vector<int> tmp_vec(nums.size()-1);
    int right = 0;
    int i = nums.size()-1;
    int left = nums.size()-1;
    
    while(right <= left)
    {
        if(nums[right] * nums[right] < nums[left] * nums[left])
        {
            tmp_vec[i--] = nums[left] * nums[left];
            left--;
        }
        else
        {
            tmp_vec[i--] = nums[right] * nums[right];
            right++;
        }
    }
    return tmp_vec;
}
void square_big_test()
{
    int n;
    cout << "please vector size n"<<endl;
    cin >> n;
    vector<int> nums(n);
    cout<< "please input n elemnt "<< endl;
    for(int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        nums[i] = j;
    }
   vector<int>  ret_vec = square_big(nums);
   cout <<"please square vec is :" <<endl;
   for(int i = 0; i < n; i++)
   {
     cout << ret_vec[i] <<endl;
   }
}
int main(int argc, char const *argv[])
{
    square_big_test();
    return 0;
}
