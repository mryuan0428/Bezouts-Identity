#include <iostream>

using namespace std;

int main()
{
    long long int s1=1,t1=0,s2=0,t2=1,r1,r2; //��ʼ��s1,t1,s2,t2,r1,r2
    long long int q,s,t,r;//��ʼ��q,s,t,r

    //����a,b
    cout<<"�����룺"<<endl;
    cout<<"a=";
    cin>>r1;
    cout<<"b=";
    cin>>r2;

    q=r1/r2;//��q
    r=r2; r2=r1-r*q; r1=r;//���������������¸�r1,r2

    //��s,t
    while(1)
    {
        if(r2==0)
        {
            s=s2;
            t=t2;
            break;
        }
        else
        {
            //���µ�s1,s2.t1,t2
            s=s2;
            t=t2;
            s2=-q*s+s1;
            t2=-q*t+t1;
            s1=s;
            t1=t;

            //���µ�q,r1,r2
            q=r1/r2;
            r=r2;
            r2=r1-q*r;
            r1=r;

        }
    }

    cout <<"������Ϊ:"<<'\n'<<"s="<<s<<'\n'<<"t="<<t<<endl;
    return 0;
}
