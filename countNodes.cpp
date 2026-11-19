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

int countNodes(Node* ptr)
{
    if (ptr == nullptr){
        return 0;}

return 1 + countNodes(ptr->left) + countNodes(ptr->right);
 }
};
int main(){
    Tree<char> obj;
    if(obj.Root==nullptr)
        cout<<"Tree is empty";
    else {
    cout<<"Total Number of Nodes: "<<obj.countNodes(obj.Root);
        cout<<endl;
    }
    return 0;
}