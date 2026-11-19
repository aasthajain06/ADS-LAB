// C++ program to print pre-order, in-order, and post-order traversals of a binary tree

#include <iostream>
using namespace std;
template <typename type>
class Tree {
    struct Node {
        type data;
        Node* left;
        Node* right;
        Node(type d) {
            this->data = d;
            this->left = this->right = nullptr;
        }
};
public:
    Node* Root= nullptr;
    Tree() {
        Node* f= new Node('F');
        Node* b= new Node('B');
        Node* g= new Node('G');
        Node* a= new Node('A');
        Node* d= new Node('D');
        Node* i= new Node('I');
        Node* c= new Node('C');
        Node* e= new Node('E');
        Node* h= new Node('H');

        f->left= b;
        f->right= g;
        b->left= a;
        b->right= d;
        d->left= c;
        d->right= e;
        g->left= h;
        g->right= i;
        Root= f;
    }

    void preOrder(Node* ptr) {
        
        if (ptr != nullptr) {
            cout<<" "<<ptr->data;

            preOrder(ptr->left);
            preOrder(ptr->right);
        }
    }
    
    void inOrder(Node* ptr) {
        if (ptr != nullptr) {
            inOrder(ptr->left);
            cout<<" "<<ptr->data;
            inOrder(ptr->right);
        }
    }
void postOrder(Node* ptr) {
        if (ptr != nullptr) {
            postOrder(ptr->left);
            postOrder(ptr->right);
            cout<<" "<<ptr->data;
        }
    }
};
int main(){
    Tree<char>onj;
    if(obj.Root==nullptr)
        cout<<"Tree is empty";
    else {
        cout<<"\nPre-order traversal:\t ";
        obj.preOrder(obj.Root);
        cout<<endl;
        cout<<"\nIn-order traversal:\t ";
        obj.inOrder(obj.Root);
        cout<<endl;
        cout<<"\nPost-order traversal:\t ";
        obj.postOrder(obj.Root);
        cout<<endl;
    }
    return 0;
}