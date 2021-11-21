#include <bits/stdc++.h>
using namespace std;
class lru_cache
{
    list<int>dq;
    unordered_map<int,list<int>::iterator>mp;
    int mem_size;
    public:
    
    lru_cache(int n)
    {
        mem_size=n;
    }
    
    void put(int key)
    {
        if(mp.find(key)==mp.end())
        {
            if(dq.size()==mem_size)
            {
                int lru_val=dq.back();
                dq.pop_back();
                mp.erase(lru_val);
            }
        }
        else
        dq.erase(mp[key]);
        dq.push_front(key);
        mp[key]=dq.begin();
    }
    
    void display()
    {
        for (auto it = dq.begin(); it != dq.end();it++)
            cout << (*it) << " ";
        cout << endl;
    }
    
};

int main()
{
    lru_cache ca(4);
 
    ca.put(1);
    ca.display();
    ca.put(2);
    ca.display();
    ca.put(3);
    ca.display();
    ca.put(1);
    ca.display();
    ca.put(4);
    ca.display();
    ca.put(5);
    ca.display();
 
    return 0;
}
