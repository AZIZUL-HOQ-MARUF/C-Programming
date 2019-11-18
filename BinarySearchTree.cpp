#include<iostream>
using namespace std;
class Node{

public:
    Node* left;
    int data;
    Node* right;

    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};
class BST{
public:
    Node* root;
    int sum = 0;
    bool flag = false;
    int counter =0;
    BST(){
        root = NULL;
    }
    void insertNode(int d){
        Node* newNode = new Node(d);

        if(root == NULL){
            root = newNode;
        }else{
            Node* node = root;
            while(1){
                if(d<node->data){
                    if(node->left == NULL){
                        node->left = newNode;
                        return;
                    }
                    node = node->left;
                }else{
                    if(node->right == NULL){
                        node->right = newNode;
                        return;
                    }
                    node = node->right;
                }
            }
        }
    }
    void inOrderLookUp(Node* x){
        if(x != NULL){
            inOrderLookUp(x->left);
            cout << x->data << "\n";
            inOrderLookUp(x->right);
        }
    }
    void preOrderLookUp(Node* x){
        if(x != NULL){
            cout << x->data << "\n";
            inOrderLookUp(x->left);
            inOrderLookUp(x->right);
        }
    }
    void postOrderLookUp(Node* x){
        if(x != NULL){
            inOrderLookUp(x->left);
            inOrderLookUp(x->right);
            cout << x->data << "\n";
        }
    }
    int findSum(Node* x){
        if(x != NULL){
            findSum(x->left);
            sum += x->data;
            findSum(x->right);
        }
        return sum;
    }
    bool isPresent(Node* x,int d){
        if(x != NULL){
            if(d<x->data){
                isPresent(x->left,d);
                if(x->data == d){
                    flag = true;
                    return flag;
                }
            }else{
                  isPresent(x->right,d);
                  if(x->data == d){
                    flag = true;
                    return flag;
                  }
            }
        }
        return flag;
    }

};
int main(){
    BST bst;
    bst.insertNode(10);
    if(bst.isPresent(bst.root,11)){
        cout <<"present\n";
    }
    else{
        cout <<"not present\n";
    }

    //bst.inOrderLookUp(bst.root);
    //cout<<bst.counter;
    cout<< bst.findSum(bst.root);

}
