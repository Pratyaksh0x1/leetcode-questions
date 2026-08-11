class MyCircularDeque {
private:
      int size;
      int* arr;
      int Front;
      int Rear;
public:
    MyCircularDeque(int k) {
        size=k;
         arr=new int[size];
         Front=-1;
         Rear=-1;
    }
    
    bool insertFront(int value) {
        if((Front==0 && Rear==size-1) || (Rear==(Front-1+size)%size)){
            return false;
        }
        if(Front==-1){
            Front=Rear=0;
        }
        else if(Front==0){
            Front=size-1;
        }else{Front--;}
        arr[Front]=value;
        return true;
    }
    
    bool insertLast(int value) {
        if((Front==0 && Rear==size-1) || (Rear==(Front-1+size)%size)){
            return false;
        }
        if(Front==-1){
            Front=Rear=0;
        }else if(Rear==size-1){
            Rear=0;
        }else{Rear++;}
        arr[Rear]=value;
         return true;
    }
    
    bool deleteFront() {
         if(Front==-1){
            return false;
        }
        if(Front==Rear){
            Front=Rear=-1;
        }else if(Front==size-1){
            Front=0;
        }
        else {
            Front++;
        }
        return true;
    }
    
    bool deleteLast() {
        if(Front==-1){
            return false;
        }
        if(Front==Rear){
            Front=Rear=-1;
        }else if(Rear==0){
            Rear=size-1;
        }else{
            Rear--;
        }
        return true;
    }
    
    int getFront() {
         if(Front==-1){
            return -1;
        }
        return arr[Front];
    }
    
    int getRear() {
        if(Front==-1){
            return -1;
        }
        return arr[Rear];
    }
    
    bool isEmpty() {
        return Front==-1 && Rear==-1;
    }
    
    bool isFull() {
        return  ((Front==0 && Rear==size-1) || (Rear==(Front-1+size)%size)); 
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */