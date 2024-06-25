#include<iostream>
#include<malloc.h>
using namespace std;

struct slink{
   int id;
   struct slink *next;

}*head,*last,*temp,*node;

void createnode_begin(){
    node=(struct slink*)malloc(sizeof(struct slink));
    cout<<"Enter data for id:"<<endl;
    cin>>node->id;
    node->next='\0';
    if(head=='\0'){
        head=last=node;
    }
    else{
        node->next=head;
        head=node;
    }

}
void createnode_last(){
    node=(struct  slink*)malloc(sizeof(struct slink));
    cout<<"Enter data for id:"<<endl;
    cin>>node->id;
    node->next='\0';
    if(head=='\0'){
        head=last=node;
    }
    else{
        last->next=node;
        last=node;
    }
}
void del_begin(){

    temp=head;
    head=head->next;
    free(temp);
}
void del_end(){
   
    temp=head;
    while (temp->next !=last)
    {
        temp=temp->next;
    }
    temp->next='\0';
    free(last);
    last=temp;
    
}
void disp(){
    temp=head;
    while(temp!='\0'){
        cout<<temp->id<<"->";
        temp=temp->next;
    }
}
void count_node(){
    int count=0;
    temp=head;
    while (temp != NULL)
    {
        count++;
        temp=temp->next;
    }
    cout<<count<<endl;
}

int main(){
    int ch;
    cout<<"Enter the choise:";
    cin>>ch;
    switch (ch)
    {
    case 1:createnode_begin();
           main();
           break;
    case 2:createnode_last();
           main();
           break;
    case 3:del_begin();
           main();
           break;
    case 4:del_end();
           main();
           break;
    case 5:disp();
           main();
           break;
    case 6:count_node();
           main();
           break;
    }
}