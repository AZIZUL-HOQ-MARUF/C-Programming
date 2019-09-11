#include<iostream>
using namespace std;
const int MAX_SIZE = 1000;
class Queue{
private:
    int head,tail,counter;
    int arr[MAX_SIZE];
public:
    Queue(){
        head = 0;
        tail = 0;
        counter = 0;
    }
    void push(int data){
        arr[tail] = data;
        tail++;
        counter++;
    }
    int pop(){
        int x = arr[head];
        head++;
        counter--;
        return x;
    }
    int peek(){
        return arr[head];
    }
    bool isEmpty(){
        return counter == 0 ? true:false;
    }

};

int main(){
    Queue q;
    q.push(10);
    q.push(15);
    q.push(25);
    q.push(35);
    q.push(55);
    cout<<q.pop() <<"\n";
    cout<<q.pop() <<"\n";
    cout<<q.pop() <<"\n";
    cout<< q.isEmpty() <<"\n";
    cout<<q.peek() <<"\n";
    cout<<q.peek() <<"\n";
    cout<<q.pop() <<"\n";
    cout<<q.pop() <<"\n";
    cout<<q.isEmpty() <<"\n";
}
