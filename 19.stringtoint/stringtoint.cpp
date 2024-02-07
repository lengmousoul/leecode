#include "stringtoint.h"

void solution::string_to_int_test(void)
{
    cout <<"please input string" <<endl;
    string origin_string;
    getline(cin,origin_string);
    cout << string_to_int(origin_string)<<endl;
}
int solution::string_to_int(string s)
{
    int index= 0,len = s.size(),sign = 1,res = 0 , digit = 0;
    //去除空号
    while((index < len) && (s[index] == ' '))
    {
        index++;
    }
    //处理符号
    while((index < len) && ( (s[index] == '+')||(s[index]=='-') ) )
    {
        sign = s[index++] == '+'? 1 : -1; 
    }

    //处理溢出
    while((index < len)&& (isdigit(s[index])))
    {   
        digit = s[index] - '0';
        if(res > ((INT_MAX - digit) /10 )) 
        {
            return  sign == 1? INT_MAX: INT_MIN;
        }
        res = res * 10 + digit;
        index++;
    }
    return res * sign;
    


}

int main(int argc, char const *argv[])
{
    solution obj;
    obj.string_to_int_test();
    return 0;
}
