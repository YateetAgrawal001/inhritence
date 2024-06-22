#include <iostream>
#include <stack>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node(int v){
        val= v;
        this -> next =NULL;
    }
};
class Linkedlist{
public:
    
    Node *head;
    Node * tail;
    int size;
    
    Linkedlist(){
        head = tail = NULL;
        size = 0;
    }
    
    void insertAtEnd(int val){
        Node * temp= new Node(val);
        if(size==0) {
            head=tail=temp;
            
        }
        else{
            tail->next = temp;
            tail= temp;
        }
        size++;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
    }
};

Node* revKele(Node* root, int key){
    if(root == NULL) return root;
    Node* rh=NULL;
    Node* x = NULL;
    Node* y = NULL;
    stack<Node*> st;
    while(root!=NULL){
        st.push(root);
        root = root->next;
        if(st.size()==0){
            Node* temp1 = st.top();
            st.pop();
            rh = temp1;
            while(st.size()>0){
                temp1->next = st.top();
                st.pop();
                temp1 = temp1->next;
            }
            if(x==NULL){
                x = rh;
                y = temp1;
            }
            else{
                y->next = rh;
                y = temp1;
            }
        }
        if(root->next == NULL){
            Node* temp = st.top();
            st.pop();
            if(st.size()>0){
                while(st.size()>0){
                    Node* loda = st.top();
                    st.pop();
                    loda->next = temp;
                    temp = loda;
                }
                y->next = temp;
            }
            
        }
    }
    return x;
}

int main(){

    Linkedlist ll;
    
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    //(*a).next = a->next
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    int k =2;
    ll.display();
    revKele(a,k);
  
    cout<<endl;
    ll.display();
    
    return 0;
}