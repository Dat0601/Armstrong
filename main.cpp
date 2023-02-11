#include <iostream>
using namespace std;
int scs(int n) // find the number of digits of n
{
    int dem=0;
    while (n>0)
    {
        dem++;n/=10;
    }
    return dem;
}
long long lt(int a, int b)  // calculate a^b (similar to pow(a,b) but return a integer not double)
{
    long long S = 1;
    for (int i = 1; i <= b; i++) S *= a;
    return S;
}
bool arm(int n) // Test if n is armstrong number
{
    long long S=0;int c=n;
    while (n>0)
    {
       S += lt(n%10,scs(c));
       n/=10;
    }
    if (S==c) return true; else return false;
}
int main() {
    int n; cin>>n; int dem=0;
    for (int i=1;i<=n;i++)
    {
        if (arm(i)==1) dem++; // count the number of the Armstrong Number from 1 to n
    }
    cout<<dem;
    return 0;
}
