#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

class list{
    node* head;
    node* tail;

public:
    list(){
        head = tail = NULL;
    }

    void push_front(int val){
        node* newnode = new node(val);
        if(head == NULL){
            head = tail = newnode;
        } else {
            newnode->next = head;
            head = newnode;
        }
    }

    void push_back(int val){
        node* newnode = new node(val);
        if(head == NULL){
            head = tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = newnode;
    }

    void pop_front(){
        if(head == NULL) return;

        node* temp = head;
        head = head->next;

        if(head == NULL)
            tail = NULL;

        delete temp;
    }

    void pop_back(){
        if(head == NULL) return;

        if(head->next == NULL){
            delete head;
            head = tail = NULL;
            return;
        }

        node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }

        delete tail;
        tail = temp;
        tail->next = NULL;
    }

    void printll(){
        node* temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main(){
    list ll;
    ll.push_front(20);
    ll.push_front(30);
    ll.push_front(40);
    ll.printll();

    ll.push_back(50);
    ll.printll();

    ll.pop_front();
    ll.pop_back();
    ll.printll();

    return 0;
}