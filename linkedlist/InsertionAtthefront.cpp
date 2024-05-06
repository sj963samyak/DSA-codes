#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
}
//head is given by refrence as we do not want to make the new changes in the node
void insertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void printNode(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    } 
} 
void insertAtPosition(Node* &head,int position,int d){
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    Node* nodeToInsert=new Node(D);
    nodeToInsert->next=temp->next
    temp->next=nodeToInsert;
}
int main(){
    Node* node=new Node(10);
    cout<<node->data;

}