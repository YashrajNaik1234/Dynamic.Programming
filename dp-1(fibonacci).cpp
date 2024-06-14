#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;
//memorization
ll ara[1000];
int fib(ll n)
{
    if (n<2) return 1;
    else return fib(n-1)+fib(n-2);

}

int main()
{
    ara[1]=1;
    ara[2]=1;
    ll n; cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}
