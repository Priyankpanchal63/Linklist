#include<iostream>
#include<malloc.h>
using namespace std;

struct slink{
   int id;
   struct slink *next;

}*head,*last,*temp,*node;

void createnode_begin(){
    node=(struct slink*)malloc(sizeof(struct slink));
    cout<<"Enter data for id\n";
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
void disp(){
    temp=head;
    while(temp!='\0'){
        cout<<temp->id<<"->";
        temp=temp->next;
    }
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
    case 2:disp();
           main();
           break;
    }
}