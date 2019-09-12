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
    int counter;
    bool flag = false;
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
    bool isPresent(Node* x,int d){
        counter ++;
        cout << counter;
        if(x != NULL){
            isPresent(x->left,d);
            if(x->data == d){
                flag = true;
                return flag;
            }
            isPresent(x->right,d);
        }
        return flag;
    }
    bool bsIsPresent(Node* x,int d){ 
       if(x == NULL){
           flag = false;
           return flag;
       }
       else{
           if(x->data == d){
               flag =true;
               return flag;
           }
           Node* n = x;
           while(1){
               if(d<n->data){
                   if(n->left == NULL){
                       return flag;
                   }
                   else{
                       if(n->left->data == d){
                           flag =true;
                           return flag;
                        }
                        else{
                            n = n->left;
                        }
                   }
               }
               else{
                   if(n->right == NULL){
                       return flag;
                   }
                   else{
                       if(n->right->data == d){
                           flag =true;
                           return flag;
                        }
                        else{
                            n = n->right;
                        }
                   }
               }
           }
       }
        return flag;
    }
    bool isEmpty(){
        return root==NULL ? true : false;
        
    }

};
int main(){
    BST bst;
    bst.insertNode(10);
    bst.insertNode(5);
    bst.insertNode(12);
    bst.insertNode(11);
    bst.insertNode(4);
    bst.insertNode(32);
    bst.insertNode(2);
    if(bst.bsIsPresent(bst.root,32)){
        cout <<"present\n";
    }
    else{
        cout <<"not present\n";
    }

    bst.inOrderLookUp(bst.root);

}
