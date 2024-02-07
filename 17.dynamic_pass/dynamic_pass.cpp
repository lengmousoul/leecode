#include "dynamic_pass.h"

// 描述:将 password 前 target 个字符按原顺序移动至字符串末尾
// 输入: password = "s3cur1tyC0d3", target = 4
// 输出: "r1tyC0d3s3cu
void solution::dynamic_pass_test(void)
{
    cout <<"please input password" <<endl;
    string password;
    getline(cin,password);
    cout<<"please input target"<<endl;
    int target;
    cin >> target;
    cout << dynamic_pass(password , target);
}
string solution::dynamic_pass(string pass, int target)
{
    for(int i = 0 ; i < target; i ++)
    {
        pass.push_back(pass[i]);
    }
    string res_string = "";
    for(int i = target; i < pass.size(); i++)
    {
        res_string += pass[i];
    }
    return res_string;

    // 字符串拼接
    // pass.substr(target, pass.size()) + pass.substr(0,target);

    


}
int main(int argc, char const *argv[])
{
    solution obj;
    obj.dynamic_pass_test();
    return 0;
}
