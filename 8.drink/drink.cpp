#include"drink.h"

//找规律题, 假设你有x瓶啤酒, 3个空瓶换一瓶,7个瓶盖也可以换一瓶, 问你最后可以喝多少啤酒



int finally_num(int& x)
{
    int count = x;
    int boot3 = x;
    int boot7 = x;
    while( (boot3 >= 3) || (boot7 >= 7) )
    {
        while(boot3 >= 3)
        {   
            int change = boot3/3;
            boot3 %=3;
            boot3 += change;
            boot7 += change;
            count += change;
        }
        while(boot7 >= 7)
        {
            int change = boot7/7;
            boot7 %=7;
            boot7 +=change;
            count += change;
            boot3 += change;
        }
    } 

    return count;
}
int main(int argc, char const *argv[])
{
    cout <<"please input drink num size" <<endl;
    int x;
    cin >>x;
    int res = finally_num(x);
    cout << "finally can drink: " << res<<endl;
    return 0;
}
