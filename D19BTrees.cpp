#include<bits/stdc++.h>
using namespace std;

class Node{

public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }

};

Node* BuildTree(vector<int> arr, int i){

    if(i >= arr.size())
        return NULL;

    Node* root = new Node(arr[i]);

    root->left = BuildTree(arr, 2*i+1);

    root->right = BuildTree(arr, 2*i+2);

    return root;
}



// INORDER

void inorder(Node* root){

    if(root == NULL)
        return;

    inorder(root->left);

    cout << root->data << " ";

    inorder(root->right);
}



// PREORDER

void preorder(Node* root){

    if(root == NULL)
        return;

    cout << root->data << " ";

    preorder(root->left);

    preorder(root->right);
}



// POSTORDER

void postorder(Node* root){

    if(root == NULL)
        return;

    postorder(root->left);

    postorder(root->right);

    cout << root->data << " ";
}



int main(){

    vector<int> arr = {1,2,3,4,5,6,7,8};

    Node* root = BuildTree(arr,0);

    cout << "Inorder: ";
    inorder(root);
    cout << endl;

    cout << "Preorder: ";
    preorder(root);
    cout << endl;

    cout << "Postorder: ";
    postorder(root);
    cout << endl;

    return 0;
}