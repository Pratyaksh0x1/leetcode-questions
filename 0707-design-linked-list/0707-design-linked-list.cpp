class MyLinkedList {
private:    
    class Node{
        public:
          int data;
          Node* next;
         Node(int data){
            this->data=data;
            this->next=NULL;
         }
        Node(int data, Node* next) {
        this->data = data;
        this->next = next;
    }
        
        };
          Node* head;
public:
    MyLinkedList() {
        head=NULL;
    }
    
    int get(int index) {
        int i=0;
        Node* temp= head;
        while(i<index && temp!=NULL){
            temp=temp->next;
            i++;
        }
        if(temp==NULL){
            return -1;
          }
            return temp->data;
        
    }
    
    void addAtHead(int val) {
        
        head=new Node(val,head);
        //  cout<< temp->data; 
    }
    
    void addAtTail(int val) {
        if(head==NULL){
            head= new Node(val);
           return;
        }
        Node* temp =head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        Node* newNode =new Node(val);
        temp->next=newNode;
        
    }
    
    void addAtIndex(int index, int val) {
         if(head==NULL){
            if(index==0){
            head = new Node(val);
            return;
        } else {
            return;
        }
    }
    if(index==0){
        head = new Node(val,head);
        return;
    }
    int counter=0;
    Node* temp=head;
    while(temp!=NULL){
     counter++;
     if(counter==index){
            Node* x= new Node(val,temp->next);
            temp->next=x;
            break;
     }
     temp=temp->next;
    }

    }
    void deleteAtIndex(int index) {
        if(head==NULL){
            return;
        }if(index==0){
            Node*temp=head;
            head=head->next;
            delete temp;
            return;
        }
        Node* temp = head;
        int i = 0;

        while (temp->next != NULL && i < index - 1) {
            temp = temp->next;
            i++;
        }

        if (temp->next == NULL) return;

        Node* delNode = temp->next;
        temp->next = delNode->next;
        delete delNode;
        
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */