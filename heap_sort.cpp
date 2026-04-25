#include<bits/stdc++.h>
#include <iterator>
using namespace std;

vector<int> heap={2,5,3,5,8,7,6,9,7};
int cnt=heap.size(); //指向器，指向堆尾，元素按照1-based编序

/*上滤操作（percolate_up）*/
void percolate_up(int cnt)
{
    /*
        检查当前位置是否有父节点，以及父节点是否大于当前位置的值
        需要注意的是，由于元素按照1-based编序，所以访问时要减一，以适应数组的下标
    */
    if(cnt/2 && heap[cnt/2-1]>heap[cnt-1]) 
    {
        swap(heap[cnt/2-1],heap[cnt-1]); //符合条件则交换当前位置与父节点
        percolate_up(cnt/2); //由于当前节点已经被换到父节点上了，所以递归时要使用父节点地址
    }
}
void percolate_down()
{

}

/*在堆的尾部插入*/
void insert(int value)
{
    heap.push_back(value);
    cnt++;
    percolate_up(cnt);
}
void pop()
{

}


int main(void)
{
    for(int output:heap)
    {
        cout << output;
    }
    cout << endl;

    int insert_va;
    cin >> insert_va;

    insert(insert_va);
    for(int output:heap)
    {
        cout << output;
    }
    cout << endl;

    return 0;
}