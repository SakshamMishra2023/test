//STACKS
#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

#define MAX_SIZE 1000

class stack{
    int top;
    int arr[MAX_SIZE];
    public:
    stack(int l){
        top =-1;
    }
    int pop();
    bool push(int x);
    bool isEmpty();
    int topp();
    void present();

};

bool stack::push(int x){
    if(top >= MAX_SIZE - 1){
        return false;
    }
    else{
    arr[++top] = x;
    return true;
    }
}
int stack::pop(){
    return arr[top--];
}
bool stack::isEmpty(){
    if(top == -1){
        return true;
    }
    else{
        return false;
    }
    
}
int stack::topp(){
    return arr[top];    
}
void stack::present(){
    for(int f=0;f<=top;f++){
        cout<< arr[f] <<" ";
    }    
    cout<<endl;
}

int main(){
    int t;
    cin>>t;

    stack s1(t);

    for(int j=0; j<t;j++){
         int x;
        cin>>x;
        s1.push(x);
    }
    s1.present();
    s1.pop();
    s1.present();

    return 0;
    
}

//QUEUES
#include <iostream>
#include <vector>

using namespace std;

class queue {
    int front;
    int rear;
    int cnt;
    int n;
    vector<int> arr;

public:
    queue(int l) {
        front = 0;
        rear = 0;
        cnt = 0;
        n = l;
        arr.resize(n);
    }

    int pop();
    bool push(int x);
    bool isEmpty();
    int topp();
    void present();
};

bool queue::push(int x) {
    if (cnt >= n) {
        return false;
    } else {
        arr[rear % n] = x;
        rear++;
        cnt++;
        return true;
    }
}

int queue::pop() {
    if (cnt == 0) {
        return -1;
    } else {
        arr[front % n] = -1;
        front++;
        cnt--;
    }
}

bool queue::isEmpty() {
    return cnt == 0;
}

int queue::topp() {
    return arr[front % n];
}

void queue::present() {
    for (int f = 0; f < cnt; f++) {
        cout << arr[(front + f) % n] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    queue s1(t);

    for (int j = 0; j < t; j++) {
        int x;
        cin >> x;
        s1.push(x);
    }
    s1.present();
    s1.pop();
    s1.present();

    return 0;
}
