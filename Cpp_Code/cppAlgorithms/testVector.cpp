#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,t;
    vector<int> a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        a.push_back(t);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
} 