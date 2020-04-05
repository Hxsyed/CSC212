#include <iostream>
using namespace std;

typedef struct node{
    int data;
    node* next;
}* nodeptr;

nodeptr head;

  //FUNCTION TO ADD NODES AT THE END OF LINKLIST
void insertend (int x){
    nodeptr n, temp;
    n = new node;
    n->data = x;
    n->next = NULL;
    if (head == NULL){
        head = n;
    }
    else {
        temp = head;
        while (temp->next!= NULL){
            temp = temp->next;
        }
        temp->next = n;
    }
}

    // SORT THE LINKLIST
void sort(nodeptr head){
    nodeptr ptr, cpt;
    int temp;
    ptr = head;
    while (ptr!=NULL){
        cpt = ptr->next;
        while (cpt!=NULL){
            if (ptr->data > cpt->data){
                temp = ptr->data;
                ptr->data = cpt->data;
                cpt->data = temp;
            }
            cpt = cpt->next;
        }
    ptr = ptr->next;
    }
}

    //PRINT THE LINKLIST
void print(nodeptr head){
    nodeptr temp;
    temp = head;
    while (temp!= NULL){
        cout << temp->data<< endl;
        temp = temp->next;
    }
}

    // REMOVE DUPLICATE FROM LIST
void removedup(nodeptr head){
    nodeptr p,q;
    p = head;
    while (p!=NULL && p->next!= NULL){
        if (p->data == p->next->data){
            q = p->next->next;
            if (q==NULL){
                p->next = NULL;
                break;
            }
            p->next = q;
        }
        if (p->data != p->next->data){
            p = p->next;
        }
    }
}
int main(){
    head = NULL;
    int num, x;
    cout << "How many numbers are you going to insert? " << endl;
    cin >> num;
    for (int i = 0; i<num; i++){
        cout << "Number: ";
        cin >> x;
        insertend(x);
    }
    cout << "Given list is: " << endl;
    print(head);
    sort(head);
    cout << "Sorted list is: " << endl;
    print(head);
    removedup(head);
    cout << "Non-Duplicated list is: " << endl;
    print (head);
    return 0;
}