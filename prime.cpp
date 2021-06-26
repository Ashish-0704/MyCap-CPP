#include <iostream>
using namespace std;

int prime(int x,int y)
{
    int a=0,b=0;
    for (int i = 1; i <= x; i++)
    {
        if(x%i == 0)
        {
            a++;
        }
    }
    for (int i = 1; i <= y; i++)
    {
        if(y%i == 0)
        {
            b++;
        }
    }
    if(a<=2 && b<=2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n,res;
    cout<<"\nEnter an integer";
    cin>>n;
    for (int i = 2;i <= n/2; i++)
    {
        res = prime(i,n-i);
        if(res==1)
        {
            break;
        }
    }
    if(res)
    {
        cout<<"Yes! "<<n<<" can be expressed as a sum of two prime numbers";
    }
    else
    {
        cout<<"No! "<<n<<" cannot be expressed as a sum of two prime numbers";
    }
    return 0;
}