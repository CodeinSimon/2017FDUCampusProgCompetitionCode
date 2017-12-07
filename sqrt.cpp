/*
描述 

输入 
有多组测试数据，不超过120组。
每个测试数据一行，包含一个没有前导0的非负整数n(0<=n<=10^100)。
输出 
每组测试数据输出一行，如果可以在5个单位时间内满足条件，输出最少需要多少个单位的时间，否则输出"KILL la KILL"（不含引号）。
样例输入1 
1
233
233333333333333333333333333333333333333333333333333333333
样例输出1 
0
3
KILL la KILL

*/
#include<iostream>
#include<string>
#include<math.h>
using namespace std;
 string s;

//开根号向下取整数
void sqrt_num(long long &num)
{
    num=(long long)sqrt(num);
}
long long  get_num(string s)
{
    int t = s.size(),i=0;
    long long  num=0;
    while(i<t)
    {
        num=num*10+s[i++]-'0';
    }
    return num;
}
int main()
{
    long long  num;
    int cnt=0;
    int i ;
    while(cin>>s){
    i = s.size();
    if(i>10||s[0]=='0')cout<<"KILL la KILL"<<endl;
    else{
            num=get_num(s);//变成长整型的数
            while(num)
            {
                if(cnt>5){cout<<"KILL la KILL"<<endl;cnt=0;break;}//是否始终未完成
                if(num==1) {cout<<cnt<<endl;cnt=0; break;}//是否已经完成
                else{
                    sqrt_num(num);//继续开根号取整
                    cnt++;//记下操作次数
                }
            }
    }
    }
    return 0;

}
