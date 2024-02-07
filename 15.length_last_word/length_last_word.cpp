#include "length_last_word.h"

int solution::length_last_word(string s)
{
    s += ' ';
    string split_string = "";
    vector<string> string_vec;
    for(char str: s)
    {
        if(str == ' ')
        {
            if(split_string != "")
            {
                string_vec.push_back(split_string);
                split_string.clear();
            }
        }
        else
        {
            split_string += str;
        }
    }
    return string_vec.back().size();



}
void solution::length_last_word_test(void)
{
    cout <<"please input string" <<endl;
    string origin_string;
    getline(cin , origin_string);
    int res = length_last_word(origin_string);
    cout << res<< endl;

}

int main(int argc, char const *argv[])
{
    solution obj;
    obj.length_last_word_test();
    return 0;
}



