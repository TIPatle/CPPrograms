#include <iostream>

using namespace std;

class Node {

    public :

        int data;
        int lbit;
        int rbit;

        Node* left ;
        Node* right;

        Node( int val ){

            data = val;
            lbit = 0;
            rbit = 0;

        }

};

Node* CreateRootNode ( int data ){

    Node* node = new Node(data);
    node->left = node;
    node->right = node;

    return node;

}

void insertNewNode ( Node* root, int val ){

    Node* node = new Node(val);

    if ( root == NULL ){

        root = CreateRootNode(val);
        return ;
    
    }

    Node* current = root->left;

    while ( true ){

        if ( )

    }

}


int main(){




    return 0;

}