#include "path_encryption.h"

// 假定一段路径记作字符串 path，其中以 "." 作为分隔符。现需将路径加密，
// 加密方法为将 s 中的分隔符替换为空格 " "，请返回加密后的字符串
string solution::path_encryption(string s)
{   string res_string;
    for(char c:s)
    {
        if(c == '.')
        {
            res_string += ' ';
        }
        else
        {
            res_string += c;
        }
    }
    return res_string;
}
void solution::path_encryption_test(void)
{
    cout <<"please input string" <<endl;
    string origin_string;
    getline(cin,origin_string);
    cout << path_encryption(origin_string) <<endl;
    

}

int main(int argc, char const *argv[])
{
    solution obj;
    obj.path_encryption_test();
    return 0;
}
