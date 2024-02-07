#include "reverse_string.h"
//编写一个函数，其作用是将输入的字符串反转过来。输入字符串以字符数组 s 的形式给出。
void reverse_string(vector<char>&nums)
{
    int left = 0 , right = nums.size()-1;
    char tmp;
    while(left <= right)
    {
        tmp = nums[left]; 
        nums[left++] = nums[right];
        nums[right--] = tmp;
    }
}
void reverse_string_test(void)
{
    cout <<"please input char size n" <<endl;
    int n;
    cin >> n;
    vector<char>vec;
    cout <<"please input char element" <<endl;
    for(int i = 0; i < n; i++)
    {   char j;
        cin >> j;
        vec.push_back(j);
    }
    cout<<"before reverse" <<endl;
    for(char c: vec)
    {
        cout << c;
    }
    cout << endl;
    reverse_string(vec);
    cout<<"after reverse" <<endl;
    for(char c: vec)
    {
        cout << c;
    }
    cout << endl;
    
    
}

int main(int argc, char const *argv[])
{
    reverse_string_test();
    return 0;
}
