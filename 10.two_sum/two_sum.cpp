#include"two_sum.h"


vector<int>two_sum_violent(vector<int>nums,int target)
{   
    vector<int> tmp;
    for(int i = 0; i < nums.size(); i++)
    {
        for(int j = i+1; j < nums.size(); j++)
        {
            if(nums[i] + nums[j] == target)
            {
                tmp.push_back(i);
                tmp.push_back(j);
                return tmp;
            }
        }
    }
    return tmp;
}
vector<int> two_sum_hash(vector<int>nums, int target)
{
    unordered_map<int,int> hash;
    vector<int> tmp;
    for(int i = 0; i < nums.size(); i++)
    {
        if(hash.count(target - nums[i]))
        {
            return {hash[target - nums[i]], i};
        }
        else
        {
            hash[nums[i]] = i;
        }
    }
    return tmp;


}
void two_sum_test(void)
{
    cout << "please input n size"<<endl;
    int n;
    cin >> n;
    cout << "please input element"<<endl;
    vector<int> v1;
    int j;
    for(int i = 0; i < n; i++)
    {
        cin >>j;
        v1.push_back(j);
    }
    cout << "please input target"<<endl;
    int target;
    cin >>target;
    vector<int> res = two_sum_violent(v1,target);
    for(auto x:res)
    {
        cout<<"violent" << x<<endl;
    }

    vector<int> res1 =  two_sum_hash(v1,target);
    for(vector<int>::iterator it = res.begin(); it != res.end(); it++)
    {
        cout <<"hash"<< *it << endl;
    }
    


}


int main(int argc, char const *argv[])
{
    two_sum_test();
    return 0;
}
