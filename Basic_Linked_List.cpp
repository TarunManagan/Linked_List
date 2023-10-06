#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    //Constructor to initialize Node
    
    Node(int data){ //Parameterized Constructor
        val = data;
        next=NULL;
    }
};
int main() {
    Node *n = new Node(1);
    cout<<n->val<<" "<<n->next<<endl;
    
    return 0;
}

/*OUTPUT
1 0*/
