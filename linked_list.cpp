//#include <iostream>
//using namespace std;
//
//class node{
//    int data;
//    node* next;
//
//    public:
//    node(int data1,node* next1){
//        data=data1;
//        next=next1;
//    }
//};
//
//int main()
//{
//    // new here basically just gives address of node
//    node* y= new node(2,nullptr);
//    std::cout<<y;
//    
//
//    return 0;
//}
//-------------------------------------------------------------------------------------
// CREATING A FULLY FUNCTIONAL LINKED LIST AND TRAVERSING
//#include <iostream>
//#include <vector>
//using namespace std;
//
//class node{
//    public:
//    int data;
//    node* next;
//
//    public:
//    node(int data1,node* next1){
//        data = data1;
//        next = next1;
//    }
//
//    public:
//    node(int data1){
//        data = data1;
//        next = nullptr;
//    }
//};
//
//node* conver_vectoll(vector<int> &array){
//    node* head = new node(array[0]);
//    node* mover = head;
//
//    for(int i = 1; i < array.size(); i++){
//
//        node* temp = new node(array[i]);
//        mover->next = temp;  
//        mover = mover->next;
//
//    }
//     return head;
//}
//int llcount(node* head){
//
//    int cnt=0;
//    node* tmp = head;
//    while(tmp){
//        tmp = tmp -> next;
//        cnt++;
//    }
//    return cnt;
//
//}
//
//int checker(node* head, int value){
//
//    node* tmp = head;
//    while(tmp){
//        if(tmp->data==value){
//            return 1;
//        }
//        tmp = tmp -> next;
//    }
//    return 0;
//
//}
//
//int main(){
//    vector <int> arr = {65,4,6,3,4};
//    node* head = conver_vectoll(arr);
//
//    node* tmp = head;
//    while(tmp){
//        cout<< tmp -> data<<endl;
//        tmp = tmp -> next;
//    }
//    std::cout<<"no of elements in ll "<<llcount(head)<<std::endl;
//    std::cout<<checker(head,4);
//
//return 0;
//}
//--------------------------------------------------------------------------------------
//double linked list
// head is the bane of existence for a linked list
#include <iostream>
#include <vector>

using namespace std;

class node{
    public:
    int data;
    node* next;
    node* back;

    public:
    node(int data1,node* next1, node* back1){
        data = data1;
        next = next1;
        back = back1;
    }
    public:
    node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }

};

node* conver_vecto2ll(vector<int> &arr){
    node* head = new node(arr[0]);
    node* prev = head;
    for(int i = 1;i < arr.size();i++){
        node* temp = new node(arr[i],nullptr,prev);
        prev -> next = temp;
        prev = temp;
    }
    return head;
}

node* deletehead(node* head){
    if(head == nullptr || head ->next == nullptr){
        return head;
    }
    node* prev = head;
    head = head -> next;
    head -> back = nullptr;
    prev -> next = nullptr;

    delete prev;
    return head;

} 
node * deletetail(node* head){
    if(head == nullptr || head -> next == nullptr){
        return head;
    }
    node* tail = head;
    while(tail -> next != nullptr){
        tail = tail -> next;
    }
    node* newtail = tail -> back;
    tail -> back = nullptr;
    newtail -> next = nullptr;

    delete tail;
    return newtail;
}

node* delete_kth_ele(node* head , int k){
    int cnt = 0;
    node* knode = head;
    while(knode -> next != nullptr){
        cnt++;
        if(cnt == k){
            break;
        }
    
        knode = knode -> next;
    }
        node* prev = knode -> back;
        node* front = knode -> next;

        if( prev == nullptr && front == nullptr){
            return nullptr;
        }
        else if(prev == nullptr){
            return deletehead(head);
        }
        else if(front == nullptr){
            return deletetail(head);
        }
        prev -> next = front;
        front -> back = prev;
        knode ->back = nullptr;
        knode ->next = nullptr;

         return knode;
 
}

void pri(node *head){
    while(head != nullptr){
        cout<< head->data<<" ";
        head = head->next;
    }
}

int main(){
    vector <int> bro = {65,4,6,3,4};
    node* head = conver_vecto2ll(bro);
    //head = deletehead(head);
    //node* ntail = deletetail(head);
    node* bullshit = delete_kth_ele(head, 3);
    pri(head) ;
    return 0;

}