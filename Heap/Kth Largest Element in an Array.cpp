#include<bits/stdc++.h>
using namespace std;
#define fi(n) for(int i=0;i<n;i++)
#define fd(n) for(int i=n;i>=0;i--)

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

class minheap{
    int *heap;
    int cap,curr_size;
    
    public:
    minheap(int a[],int size);
    int extract_min();
    int get_min(){return heap[0];}
    void replace(int val);
    void heapify(int idx);
    int parent(int idx) {return (idx-1)/2;}
    int left(int idx) {return 2*idx+1;}
    int right(int idx) {return 2*idx+2;}
    void print_heap();
};


minheap::minheap(int a[],int size)
{
    curr_size=size;
    heap=a;
    fd(curr_size/2-1)
    heapify(i);
}

int minheap::extract_min()
{
    if(curr_size==0)
    return INT_MAX;
    
    int min=heap[0];
    
    if(curr_size>1)
    {
        heap[0]=heap[curr_size-1];
        heapify(0);
    }
    curr_size--;
    return min;
}

void minheap::heapify(int idx)
{
    int min_idx=idx;
    int l_idx=2*idx+1;
    int r_idx=2*idx+2;
    
    if(l_idx<curr_size&&heap[min_idx]>heap[l_idx])
    min_idx=l_idx;
    
    if(r_idx<curr_size&&heap[min_idx]>heap[r_idx])
    min_idx=r_idx;
    
    if(min_idx!=idx)
    {
        swap(&heap[min_idx],&heap[idx]);
        heapify(min_idx);
    }
}

void minheap::replace(int val)
{
    heap[0]=val;
    heapify(0);
}

void minheap::print_heap()
{
    cout << "Array representation of Min Heap is:\n";
  
    fi(curr_size)
    cout<<heap[i] << " ";
    cout<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    int n,k;
    cout<<"Enter n and k"<<endl;
    cin>>n>>k;
    cout<<"Enter Array"<<endl;
    int arr[n];
    fi(n)
    cin>>arr[i];
    
    // Creating a heap of first k elements
    minheap mh(arr,k);
    
    for(int i=k;i<n;i++)
    {
        if(arr[i]>mh.get_min())
            mh.replace(arr[i]);
    }
    cout<<mh.get_min()<<endl;
    
    
    return 0;
}
