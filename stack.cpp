#include<iostream>
using namespace std;
const int MAX_SIZE = 2;
class Stack{
private :
    int top =0;
    int arr [MAX_SIZE];
public:
    Stack(){
        top = 0;
    }
    void push (int x){
        arr[top]= x;
        top++;
    }
    int pop(){
        int pop;
        top--;
        pop = arr[top];
        arr[top] = NULL;
        return pop;
    }

    int peek(){
        return arr[top-1];
    }
    bool isEmpty(){
        if(top==0) return true;
        else return false;
    }

};

    int main(){
        Stack st;
        st.push(10);
        st.push(15);

        while(!st.isEmpty()){
            cout << st.pop() << endl;
            cout << st.pop() << endl;
        }


    return 0;}
