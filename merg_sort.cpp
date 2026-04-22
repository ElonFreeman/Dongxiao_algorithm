#include<bits/stdc++.h>
using namespace std;

vector<int> arr_a={9,1,7,6,6,3,2,8},
arr_b(size(arr_a));

void merg_sort(int l,int r)
{
    if(l==r) return;

    int mid=(l+r)/2;
    merg_sort(l,mid);
    merg_sort(mid+1,r);

    int i=l,j=mid+1,k=l;
    while(i<=mid && j<=r)
    {
        if(arr_a[i]<=arr_a[j])
        {
            arr_b[k++]=arr_a[i++];
        }
        else
        {
            arr_b[k++]=arr_a[j++];
        }
    }

    while(i<=mid)
    {
        arr_b[k++]=arr_a[i++];
    }
    while(j<=r)
    {
        arr_b[k++]=arr_a[j++];
    }

    for(int i=l;i<=r;i++)
    {
        arr_a[i]=arr_b[i];
    }
}

int main(void)
{
    
    merg_sort(0,size(arr_a)-1);

    for(int output:arr_a)
    {
        cout << output << ' ';
    }
    cout << endl;

    return 0;
}