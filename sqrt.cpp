/*
���� 

���� 
�ж���������ݣ�������120�顣
ÿ����������һ�У�����һ��û��ǰ��0�ķǸ�����n(0<=n<=10^100)��
��� 
ÿ������������һ�У����������5����λʱ�����������������������Ҫ���ٸ���λ��ʱ�䣬�������"KILL la KILL"���������ţ���
��������1 
1
233
233333333333333333333333333333333333333333333333333333333
�������1 
0
3
KILL la KILL

*/
#include<iostream>
#include<string>
#include<math.h>
using namespace std;
 string s;

//����������ȡ����
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
            num=get_num(s);//��ɳ����͵���
            while(num)
            {
                if(cnt>5){cout<<"KILL la KILL"<<endl;cnt=0;break;}//�Ƿ�ʼ��δ���
                if(num==1) {cout<<cnt<<endl;cnt=0; break;}//�Ƿ��Ѿ����
                else{
                    sqrt_num(num);//����������ȡ��
                    cnt++;//���²�������
                }
            }
    }
    }
    return 0;

}
