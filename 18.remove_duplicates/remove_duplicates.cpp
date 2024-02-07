#include"remove_duplicates.h"

void solution::remove_duplicates_test( )
{
    cout <<  "please input element" <<endl;
    int element;
    vector<int> vec;
    while(cin>>element) // 当输入非数字值停止
    {
        vec.push_back(element); 
    }
    cout<<remove_duplicates(vec)<<endl;
}

int  solution::remove_duplicates(vector<int> nums)
{
    //采用快慢指针
    int slow = 0;
    for(int fast = 1; fast < nums.size(); fast++)
    {
        if(nums[fast]!=nums[slow])
        {
            ++slow;
            nums[slow] = nums[fast];
        }
    }
    return slow+1;

}

int main(int argc, char const *argv[])
{
    solution obj;
   
    obj.remove_duplicates_test();

    return 0;
}
