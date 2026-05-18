#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int row=10,col=9;
    vector<vector<int>> twodarr(row,vector<int>(col));
    for(int i=1;i<row;i++)
    {
        for(int j=1;j<col;j++)
        {
            twodarr[i][j]=i+j;
        }
    }

    /*init_prefixsum*/
    vector<vector<int>> twodsum(row,vector<int>(col));
    for(int i=1;i<row;i++)
    {
        for(int j=1;j<col;j++)
        {
            twodsum[i][j]=twodsum[i-1][j]
                            +twodsum[i][j-1]
                            -twodsum[i-1][j-1]
                            +twodarr[i][j];
        }
    }

    /*interval_sum*/
    struct posi{int row,col;}begin,end;
    begin.row=4,begin.col=3,end.row=7,end.col=8;

    int suminterval=twodsum[end.row][end.col]
                    -twodsum[end.row][begin.col-1]
                    -twodsum[begin.row-1][end.col]
                    +twodsum[begin.row-1][begin.col-1];

    cout << suminterval << endl;

    return 0;
}