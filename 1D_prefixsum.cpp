#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    vector<int> a={0,1,2,3,4,5,6,7,8,9},sum(size(a));

    /*init prefixsum*/
    for(int i=1;i<size(a);i++)//1-based
    {
        //if(i==0) {sum[i]=a[i];continue;}//0-based
        sum[i]=sum[i-1]+a[i];
    }

    /*interval_sum*/
    int l=4,r=8,sumlr=sum[r]-sum[l-1];
    cout << sumlr << endl;
    
    return 0;
}