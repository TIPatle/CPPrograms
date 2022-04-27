#include <iostream>

using namespace std;

class node {

    public:

        int data;
        node* left ;
        node* right;

        node ( int val ){

            left = NULL;
            right = NULL;
            data = val;

        }

};

node* InsertInBinaryTree ( node* root , int data){

    if ( root == NULL )
        return new node(data);

    if ( root->data > data )
        root->left = InsertInBinaryTree(root->left, data);

    else if ( root->data < data )
        root->right = InsertInBinaryTree(root->right, data);

    return root;

}

//int heightBinary

void inorder ( node* root ){

    if ( root == NULL )
        return ;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

int main(){



    return 0;

}
