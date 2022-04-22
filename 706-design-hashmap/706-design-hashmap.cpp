class MyHashMap {
private: 
    int arr[1000001]={0};
public:
    MyHashMap() {}
    void put(int key, int value) {
        if(value!=0)
            arr[key]=value;
        else arr[key]=-1;
    }
    
    int get(int key) {
        if(arr[key]==0) return -1;
        else if(arr[key]==-1) return 0;
        else return arr[key];
    }
    
    void remove(int key) {
        arr[key]=0;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */