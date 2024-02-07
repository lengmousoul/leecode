#include "straight.h"

bool is_straight(vector<int>& nums)
{
   //排序 
   sort(nums.begin(), nums.end());

   //大小王数量 
   int zero_num = 0;

   for(int i = 0; i < 5; i++)
   {
        if(nums[i] == 0)
        {
            zero_num++;
        }
        else if(nums[i] == nums[i+1])
        {
            return false;
        }
   }
   return nums[4] - nums[zero_num] < 5;  // nums[zerom]表示非大小王的最小数字
 

}

int main(int argc, char const *argv[])
{
    vector<int> vec;
    cout << "vec size"<<endl;
    cout << vec.size()<<endl;
    cout <<"please input five num" <<endl;
    int num;
    for(int i = 0; i < 5; i++)
    {   
        cin >> num;
        vec.push_back(num);
    }
    cout << "vec size "<<endl;
    cout << vec.size()<<endl;
    if(is_straight(vec))
    {
        cout << "this is straight"<<endl;
    }
    else
    {
        cout << " this is not "<<endl;
    }
    return 0;
}
