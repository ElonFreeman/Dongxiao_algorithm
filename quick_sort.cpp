#include<bits/stdc++.h>
using namespace std;

vector<int> arr={9,1,7,6,6,3,2,8};

void quick_sort(int l,int r)
{
    if(l==r) return;

    int i=l-1,j=r+1,mid=arr[(l+r)/2];

    while(i<j)
    {
        do {i++;} while(arr[i]<mid);
        do {j--;} while(arr[j]>mid);
        if(i<j) swap(arr[i],arr[j]);
    }

    quick_sort(l,j);
    quick_sort(j+1,r);
}

int main(void)
{
    
    quick_sort(0,size(arr)-1);
    for(int output:arr)
    {
        cout << output <<' ';
    }
    cout << endl;

    return 0;
}