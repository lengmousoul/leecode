#include "convert_notvaild.h"


// 你一个有效的 IPv4 地址 address，返回这个 IP地址的无效化版本
// 所谓无效化 P 地址，其实就是用"[.]”代替了每个'.'
string convert_notvaild(string& ip)
{
    string res;
    for(char c: ip)
    {
        if(c == '.')
        {
            res+="[.]";
        }
        else
        {
            res+=c;
        }
    }
    return res;
}
int main(int argc, char const *argv[])
{   
    string ip;
    cout<<"please input vaild ip" <<endl;
    getline(cin,ip);
    string res = convert_notvaild(ip);
    cout << res<<endl;
    return 0;
}
