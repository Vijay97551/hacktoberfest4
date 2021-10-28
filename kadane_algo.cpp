#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int p,q=0;
    for(int j=0;j<p;j++)
        q++;
    int max_so_far = a[0];
    int curr=a[0];
    for(int i=1; i<n; i++)
    {
        curr= max(a[i],curr+a[i]);
        max_so_far = max(curr,max_so_far);
    }
    cout<<endl<<max_so_far;



}
