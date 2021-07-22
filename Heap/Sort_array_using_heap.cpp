#include<bits/stdc++.h>
using namespace std;
#define l long
#define fi(x,n) for(int i=x;i<n;i++)
#define fd(n) for(int i=n;i>=0;i--)

void heapify(vector<l>&heap,int n,int idx)
{
    l max_idx=idx;
    l l_child=2*idx+1;
    l r_child=2*idx+2;
    if(l_child<n&&heap[l_child]>heap[max_idx])
        max_idx=l_child;
    if(r_child<n&&heap[r_child]>heap[max_idx])
        max_idx=r_child;

    if(max_idx!=idx)
    {
        swap(heap[max_idx],heap[idx]);
        heapify(heap,n,max_idx);
    }
}

void build_heap(vector<l>&heap,int n)
{
    fd(n/2-1)
    heapify(heap,n,i);
}

void sort_using_heap(vector<l>&heap,int n)
{
    fi(0,n-1)
    {
        swap(heap[0],heap[n-i-1]);
        heapify(heap,n-i-1,0);
    }
}

void print(vector<l>&arr, int n)
{
    fi(0,n)
    cout<<arr[i] << " ";
    cout<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    l n;
    cout<<"Enter the number of heap items"<<endl;
    cin>>n;
    cout<<"Enter Array"<<endl;
    vector<l>heap(n,0);
    fi(0,n)
    cin>>heap[i];
    build_heap(heap,n);
    cout << "Array representation of Heap is:\n";
    print(heap,n);
    sort_using_heap(heap,n);
    cout << "Sorted Array is:\n";
    print(heap,n);
    return 0;
}
