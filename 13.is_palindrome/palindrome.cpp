#include "palindrome.h"
//如果在将所有大写字符转换为小写字符、并移除所有非字母数字字符之后，
//短语正着读和反着读都一样。则可以认为该短语是一个 回文串 
bool solution::palindrome(string& s)
{
    int left = 0, right = s.size() - 1;
    while(left < right)
    {   
        //确保left 指向字母或者数字上
        while((left < right) && (!isalnum(s[left])))
        {
            left++;
        }
        //确保right 指向字母或者数字上
        while((left < right) && (!isalnum(s[right])))
        {
            right --;
        }
        if(transform(s[left]) != transform(s[right]))
        {
            return  false;
        }
        // 判断完毕以后需要刷新 left 以及right
        left++;
        right--;

    }
    return true;
}
void solution::palindrome_test(void)
{
    cout <<"please input string" <<endl;
    string origin_string;
    getline(cin,origin_string);
    solution tmp_obj;
    if(tmp_obj.palindrome(origin_string))
    {
        cout << "this is true"<<endl;
    }
    else
    {
        cout <<"this is not true" <<endl;
    }

}

int transform(int c)
{  // 如果是大写字母 转换为小写
   if (c >= 'A' && c <= 'Z')
   {
      return c + ('a'- 'A');
   }
   else
   {
      return c;
   }
   
}

int main(int argc, char const *argv[])
{
    solution obj;
    obj.palindrome_test();
    return 0;
}
