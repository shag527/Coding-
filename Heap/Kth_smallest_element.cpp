#include <bits/stdc++.h>
using namespace std;
class max_heap{
    int curr_size;
    vector<int>heap;
    public:
    max_heap(vector<int>temp,int size);
    void heapify(int idx);
    int extract_max();
    void replace(int val);
    int get_max(){return heap[0];}
    int parent(int idx) {return (idx-1)/2;}
    int left(int idx) {return 2*idx+1;}
    int right(int idx) {return 2*idx+2;}
    void print_heap();
};

max_heap::max_heap(vector<int>temp,int size)
{
    heap.resize(size);
    for(int i=0;i<size;i++)
    heap[i]=temp[i];
    curr_size=size;
    for(int i=curr_size/2-1;i>=0;i--)
    heapify(i);
}
void max_heap::heapify(int idx)
{
    int max_idx=idx;
    int l=left(idx);
    int r=right(idx);
    if(l<heap.size()&&heap[l]>heap[max_idx])
    max_idx=l;
    if(r<heap.size()&&heap[r]>heap[max_idx])
    max_idx=r;
    if(max_idx!=idx)
    {
        swap(heap[idx],heap[max_idx]);
        heapify(max_idx);
    }
}

int max_heap::extract_max()
{
    if(heap.size()==0)
    return INT_MAX;
    int max=heap[0];
    if(heap.size()>=1)
    {
        heap[0]=heap[heap.size()-1];
        heap.pop_back();
        heapify(0);
    }
    curr_size--;
    return max;
}
void max_heap::replace(int val)
{
    heap[0]=val;
    heapify(0);
}

void max_heap::print_heap()
{
    cout << "Array representation of Min Heap is:\n";
  
    for(int i=0;i<heap.size();i++)
    cout<<heap[i] << " ";
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    int n,k;
    cout<<"Enter n and k"<<endl;
    cin>>n>>k;
    cout<<"Enter Array"<<endl;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
        
    max_heap mh(arr,k);
    
    for(int i=k;i<n;i++)
    {
        if(arr[i]<mh.get_max())
            mh.replace(arr[i]);
    }
    cout<<mh.get_max()<<endl;
    return 0;
}
