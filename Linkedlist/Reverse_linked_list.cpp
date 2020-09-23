// Program to reverse linked list in groups of k

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
    linkedlist *reverse_list(linkedlist *root,int k)
    {
        linkedlist *start=root,*save=NULL,*ptr=root,*next=NULL,*curr_start=NULL;
        int count=0;
        while(ptr!=NULL&&count<k)
        {
            next=ptr->next;
            ptr->next=save;
            save=ptr;
            ptr=next;
            count++;
        }
        root=save;
        while(ptr!=NULL)
        {
            count=0;
            curr_start=ptr;
            while(ptr!=NULL&&count<k)
            {
                next=ptr->next;
                ptr->next=save;
                save=ptr;
                ptr=next;
                count++;
            }
            start->next=save;
            start=curr_start;;
        }
        start->next=NULL;
        return root;
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
    int num,val,k;
    cin>>num>>k;
    while(num--)
    {
        cin>>val;
        root=root->add_node(root,val);
    }
    root=root->reverse_list(root,k);
    root->show_list(root);
    return 0;
}