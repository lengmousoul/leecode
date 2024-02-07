#include "is_vaild_ip.h"


// 给定一个字符串表示的IP地址，比如"128.92.2.34"，判断其是否合法。合法IP地址的规则如下:
// a. 除了空格、数字和.之外，不得包含其他字符。
// b.IP地址由四个数字构成，由.分隔，每个.隔开的数字大小在0~255之间
// c. 数字前后可以有空格，但中间不能有空格。比如"123.92.2.34"合法，"123.9 2.2.34"非法
bool is_vaild_ip(const string& ip)
{    

    // 只能是数字，点 和空格 
    for(char c: ip)
    {   //检查是否包含非法字符
        if( (!isdigit(c)) && (c != '.') && (!isspace(c)) )
        {
            return false;
        }  
    }

    
    vector<int> vec_tmp(4,0);
    istringstream ss(ip);
    string part;
    int tmp_count = 0;
    //分割字符串
    while (getline(ss, part, '.'))
    {
        //跳过数字前后的空格
        unsigned int  start = part.find_first_not_of(" ");
        size_t end = part.find_last_not_of(" ");
        part = part.substr(start,end-start+1); // 用于从字符串中提取子串 参数一pos ,参数二 len

        // 检查每个部分内部是否包含空格
        if (part.find(' ') != std::string::npos) //如果找到空格会返回其所在索引，否则返回 std::string::npos
        {
            return false;
        }
        try
        {
            int num = stoi(part); //有可能抛出invalid_argument 一场
            if(num<0|| num>255)
            {
                return false;
            }
            if(tmp_count<4)
            {
                vec_tmp[tmp_count++] = num;
            }

        }
        catch(invalid_argument&)
        {
            return false; //转换为整数失败,说明不是数字
        }
        catch(out_of_range&)
        {
            return false;//数字超出范围
        }   
    }
    // 判断是否存在4部分
    if( tmp_count != 4)
    {
        return false;
    }
    return true;
  
}


int main(int argc, char const *argv[])
{
    string ip;
    cout << "please input address"<<endl;
    getline(cin,ip); //从键盘获取输入,并存储在ip内
    if(is_vaild_ip(ip))
    {
        cout <<"this is vaild" <<endl;
    }
    else
    {
        cout << "this is not vaild"<<endl;
    }

    return 0;
}
