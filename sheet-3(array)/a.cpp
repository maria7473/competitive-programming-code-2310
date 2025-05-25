#include <bits/stdc++.h>
using namespace std;
int main()
{
        long long t,sum=0;
        cin>>t;
        for(long long i=1;i<=t;i++)
        {
            long long a;
            cin>>a;
            sum += a;
        }
        cout<<abs(sum)<<endl;
}