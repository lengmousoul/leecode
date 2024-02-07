#include "palindrome_num.h"
// 给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false
//121 是回文，而 123 不是
bool solution::palindrome_num(int& nums)
{   
    int cur =0;
    int num = nums;
    //如果是负数肯定不是回文数
    if(nums < 0)
    {   
        return false;
    }
    while(num!=0)
    {
        cur = cur * 10 + num % 10;
        num /= 10;
    }


    return cur == nums;
}
void solution::palindrome_num_test(void)
{
    cout <<"please input num" <<endl;
    int num;
    cin >>num;
    if(palindrome_num(num))
    {
        cout << "this is true"<<endl;
    }
    else
    {
        cout << "this is not true" <<endl;
    }
}

int main(int argc, char const *argv[])
{
    solution obj;
    obj.palindrome_num_test();
    return 0;
}
