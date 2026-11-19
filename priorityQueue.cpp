#include <iostream>
using namespace std;
const int MAX = 100;

struct Node {
    int data;
    int priority;
};

Node pq[MAX];   //creating the priority queue array
int n=0;

void array_insert(int i, Node x) {
    for(int j=n-1; j>=i; j--) {
        pq[j+1] = pq[j];
    }
    pq[i] = x;
}
Node array_delete(int i) {
    Node val=pq[i];
  for(int j=i; j<n-1; j++) {
        pq[j] = pq[j+1];
    }
    return val;
}

void enqueue(int data, int P) {
    if( n==MAX) {
        cout<<"Priority Queue is full"<<endl;
        return;
    }
    Node x;
    x.data = data;
    x.priority = P;
    int i=0;
    while (i<n && P<=pq[i].priority) {
        i++;
    }
    array_insert(i, x);
    n++;
}
Node dequeue() {
    if(n==0) {
        cout<<"Priority Queue is empty"<<endl;
        Node x;
        x.data = -1;
        x.priority = -1;
        return x;
    }
    Node val = array_delete(0);
    n--;
    return val;
}
    