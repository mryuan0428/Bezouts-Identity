#include <iostream>

using namespace std;

int main()
{
    long long int s1=1,t1=0,s2=0,t2=1,r1,r2; //初始化s1,t1,s2,t2,r1,r2
    long long int q,s,t,r;//初始化q,s,t,r

    //输入a,b
    cout<<"请输入："<<endl;
    cout<<"a=";
    cin>>r1;
    cout<<"b=";
    cin>>r2;

    q=r1/r2;//求q
    r=r2; r2=r1-r*q; r1=r;//计算余数，并重新赋r1,r2

    //求s,t
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
            //求新的s1,s2.t1,t2
            s=s2;
            t=t2;
            s2=-q*s+s1;
            t2=-q*t+t1;
            s1=s;
            t1=t;

            //求新的q,r1,r2
            q=r1/r2;
            r=r2;
            r2=r1-q*r;
            r1=r;

        }
    }

    cout <<"计算结果为:"<<'\n'<<"s="<<s<<'\n'<<"t="<<t<<endl;
    return 0;
}
