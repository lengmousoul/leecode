#include "reverse_message.h"

string solution:: reverse_message(vector<string>& nums)
{   
    int left = 0, right = nums.size()-1;
    string tmp1;
    while (left < right)
    {
        tmp1 = nums[right];
        nums[right--] = nums[left];
        nums[left++] = tmp1; 
    }
    string tmp2 = "";
    for(int i = 0 ; i < nums.size(); i++)
    {
        tmp2 += nums[i]+ " ";
    }
    return tmp2;
}

void solution::reverse_message_test()
{
    string origin_string;
    cout <<"please input string" <<endl;
    getline(cin,origin_string);
    origin_string += ' ';//原始字符串最后添加空格
    string split_string= "";
    vector<string> tmp_vec;
    for(char s: origin_string)
    {
        if(s ==' ')
        {   //如果有前后置空格，那么必须判断临时字符串非空才能输出，否则会输出空串
            if(split_string != "")
            {
                tmp_vec.push_back(split_string);
                split_string.clear();
            }
            // 如果没有前后空格
            //tmp_vec.push_back(split_string);
            //split_string.clear();
        }
        else
        {
            split_string += s;
        }
    }
    solution tmp_obj;
    string res = tmp_obj.reverse_message(tmp_vec);
    for(char s:res)
    {
        cout<<s;
    }
    cout <<endl;


}

int main(int argc, char const *argv[])
{
    solution res;
    res.reverse_message_test();
    return 0;
}
