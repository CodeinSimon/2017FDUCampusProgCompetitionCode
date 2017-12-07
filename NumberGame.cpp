/*
一天计算机之神随手写下了一个数列。这个数列的第N项是由数字1~N依次拼接所得的数。比如第5项为12345，第11项为1234567891011。
现在计算机之神想考考你，这个数列前N项有多少数可以被3整除。
输入 
第一行为一个整数T(T<=1000)，表示数据组数。
接下来T行每行输入一个整数N(N<=10^9)，表示考虑数列前N项。
输出 
输出T行，每行一个整数代表前N项里有多少项能被3整除。
样例输入1 
1
5
样例输出1 
3
*/
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int mnt[1000];
    int t ,i;
    int temp;
    int left=0, cnt=0;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d", &temp);
        mnt[i]=temp;
        temp=0;
    }
    for(i=0;i<t;i++)
    {
        left=mnt[i]%3;
        cnt=mnt[i]/3;
        if(left==2) cout<<2*cnt+1<<endl;
        else cout<<2*cnt<<endl;
    }
    system("pause");
    return 0;
}
