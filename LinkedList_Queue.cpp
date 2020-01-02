#include<iostream>
#include<cstdlib>
using namespace std;

class Node {
  private:
    int data;
    Node* next;

  public:
    Node(){
        data = 0;
        next = NULL;
    }

    Node(int d){
        data = d;
        next = NULL;
    }

    Node(int d, Node* n){
        data = d;
        next = n;
    }

    void setData(int x){
        data = x;
    }

    int getData(){
        return data;
    }

    void setNext(Node* x){
        next = x;
    }

    Node* getNext(){
        return next;
    }

};


class LinkedList {
   private:
       Node* head;

   public:
       int nodeSize=0;
       LinkedList(){
         head = NULL;
       }


       void insertAtBack(int data){
        Node* n = new Node(data);
        if(head == NULL){
            head = n;
        }
        else {
            Node* i;
            for(i = head; i->getNext() != NULL; i=i->getNext()){
                ;
            }
            i->setNext(n);
        }
       }
        int getSize(){
            for(Node* i = head; i!=NULL; i=i->getNext()){
                nodeSize++;
            }
            return nodeSize;
        }
       void print(){
        for(Node* i = head; i != NULL; i = i->getNext()){
            cout  << i->getData() << " ";
        }
        cout << endl;
       }
       bool isEmpty(){
        return head == NULL ? true : false;
       }
       bool isPresent(int data){
            for(Node* i = head; i != NULL; i = i->getNext()){
                if(i->getData() == data){
                    return true;
                }
            }
            return false;
       }

       void deleteFromFront(){

           if(head == NULL){
            return;
           }
           if(head->getNext() == NULL){
                head = NULL;
                return;
           }else{
               head = head->getNext();
           }
       }
};

int main(){
    LinkedList list;
    // insert at BACK
   cout << "Checking Linked List Is Empty Or Not :-" << endl;
    if(list.isEmpty()){
        cout << "Linked List is Empty"<< endl;
    }
    else{
        cout << "Linked List is Not Empty"<< endl;
    }

    cout << "Involking insertAtBack With value = 10," << endl;
    list.insertAtBack(10);
    cout << "Involking insertAtBack With value = 15," << endl;
    list.insertAtBack(15);
    cout << "Involking insertAtBack With value = 16," << endl;
    list.insertAtBack(16);
    cout << "Involking insertAtBack With value = 18," << endl;
    list.insertAtBack(18);
    cout << "Printing......" << endl;
    list.print();



    if(list.isEmpty()){
        cout << "Linked List is Empty"<< endl;
    }
    else{
        cout << "Linked List is Not Empty"<< endl;
    }
    cout << "Checking size Of The LinkedList :" << endl;
    cout << "Size of Linked List is :"<< list.getSize()<<endl;

    cout << "Involking isPresent With value = 10," << endl;
    if(list.isPresent(10)){
        cout << "Present"<< endl;
    }
    else{
        cout << "Given Data Is Not Present"<< endl;
    }

    cout << "Involking deleteFromFront" << endl;
    list.deleteFromFront();
    cout << "Printing......." << endl;
    list.print();


    return 0;
}
