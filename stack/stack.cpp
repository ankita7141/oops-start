#include<iostream>
using namespace std;
template <typename T>
class Stack {
        public:
        T arr[100];
        int top=-1;
        void push(T x) {
 arr[++top]=x;
 

        }
        T pop() {
        return arr[top--];
        }
        T peek() {
        return arr[top];
        }
    };
int main() {
    Stack<int> s;
    s.push(10);
    s.push(20);
    cout<<s.peek()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl;
    return 0;
}