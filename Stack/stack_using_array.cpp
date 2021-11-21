#include<bits/stdc++.h>
using namespace std;
class Stack{
    private:
      vector<int>arr;
      int top_idx;
      
    public:
        Stack(int size)
        {
            arr.resize(size);
            top_idx=-1;
        }
        void push(int val)
        {
            if(top_idx==arr.size())
            {
                cout<<"Overflow\n";
                return;
            }
            top_idx++;
            arr[top_idx]=val;
        }
        int top()
        {
            return arr[top_idx];
        }
        
        int pop()
        {
            if(top_idx==-1)
            {
                cout<<"No element to be popped\n";
                return 0;
            }
            return arr[top_idx];
            top_idx--;
        }
        
        void Print() {
    		printf("Stack: ");
    		for(int i = 0;i<=top_idx;i++)
    			printf("%d ",arr[i]);
    		printf("\n");
    	}
    
};
int main()
{
    Stack obj(10);
    obj.push(2);
    obj.Print();
    return 0;
}
