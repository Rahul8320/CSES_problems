#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    ll n,m,k;
    cin >> n>>m>>k;
    ll arr[n],brr[m];
    for(ll i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(ll i=0;i<m;i++)
    {
        cin >> brr[i];
    }
    sort(arr,arr+n);
    sort(brr,brr+m);
    ll count = 0;
    ll a = 0;
    ll b = 0;
    while(a<n && b<m)
    {
        if((arr[a]-k) <= brr[b])
        {
            if(abs(arr[a]-brr[b]) <= k)
            {
                count++;
                a++;
                b++;
            }
            else
            {
                a++;
            }
        }
        else
        {
            b++;
        }
    }
    cout << count << endl;
    
    return 0;
}
