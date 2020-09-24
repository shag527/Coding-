// Program to detect and remove loop in a linkedlist

#include<bits/stdc++.h>
using namespace std;
#define f(x,n,d) for(int i=x;i<n;i+=d)
class linkedlist{
    int val;
    linkedlist *next;
    public:
    linkedlist *add_node(linkedlist *root,int val)
    {
        if(root==NULL)
        {
            root=new linkedlist;
            root->val=val;
            root->next=NULL;
        }
        else
        {
            linkedlist *ptr=root;
            if(ptr->next==NULL)
            {
                linkedlist *temp=new linkedlist;
                temp->val=val;
                temp->next=NULL;
                ptr->next=temp;
                return root;
            }
            while(ptr->next!=NULL)
            ptr=ptr->next;
            linkedlist *temp=new linkedlist;
            temp->val=val;
            temp->next=NULL;
            ptr->next=temp;
        }
        return root;
    }
    bool detect_loop(linkedlist *root)
    {
        int flag=0;
        linkedlist *slow=root,*fast=root;
        while(fast->next!=NULL&&slow!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                flag=1;
                break;
            }
        }
        slow=root;
        if(flag)
        {
            while(slow->next!=fast->next)
            {
                slow=slow->next;
                fast=fast->next;
            }
            fast->next=NULL;
            return true;
        }
        return false;
    }
    void show_list(linkedlist *root)
    {
        linkedlist *ptr=root;
        while(ptr!=NULL)
        {
            cout<<ptr->val<<" ";
            ptr=ptr->next;
        }
        cout<<endl;
    }
};
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    linkedlist *root=NULL;
    int num,val;
    cin>>num;
    while(num--)
    {
        cin>>val;
        root=root->add_node(root,val);
    }
    cout<<root->detect_loop(root)<<endl;
    root->show_list(root);
    return 0;
}
