#include "min_sub_length.h"

int min_sub_length(vector<int>& nums, int target)
{ 
    int sum = 0;
    int length = 0;
    int left = 0;
    for(int i =0; i < nums.size()-1; i++)
    {
        sum += nums[i];
        while(sum >= target)
        {
            length = i - left + 1;
            sum-= nums[left++];
        }       
    } 
    return length;
    
}

void min_sub_length_test()
{
    cout <<"please input n " <<endl;
    int n;
    cin >> n;
    vector<int> num(n);
    cout <<"please input n element" <<endl;
    for(int i = 0; i < n; i++)
    {
        int j = 0 ;
        cin >> j;
        num.push_back(j);
    }
    cout<< "please input target"<<endl;
    int target;
    cin >> target;
    int res = min_sub_length(num,target);
    cout <<"min sub length is : " <<res <<endl;

}

int main(int argc, char const *argv[])
{
    min_sub_length_test();
    return 0;
}
