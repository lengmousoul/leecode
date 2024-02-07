#include "remove_element.h"

int remove_element(vector<int>& nums, int target)
{   
    int slow = 0;
    for(int fast = 0 ; fast < nums.size()-1; fast++)
    {
        if(nums[fast]!= target)
        {   
            nums[slow] = nums[fast];
            slow++;
        }
    }
    return slow;
}
void test_remove_element()
{
    cout <<"please input vector size" << endl;
    int n;
    cin >> n;
    vector<int> nums(n);
    cout<< "please input n elemnt "<< endl;
    for(int i = 0 ; i < n; i++)
    {   int j;
        cin >> j;
        nums[i] = j ;
        
    }
    cout << "please input target"<< endl;
    int target;
    cin >> target;
    int ret = remove_element(nums,target);
    cout <<"final left:  " << ret << " elemet" <<endl;
}

int main(int argc, char const *argv[])
{
    test_remove_element();
    return 0;
}
