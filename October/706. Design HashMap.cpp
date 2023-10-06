class MyHashMap {
    vector<int>arr;
public:
    MyHashMap() 
    {
        arr.resize(1e6+1,-1);
    }
    
    void put(int key, int value) 
    {
        arr[key]=value;
    }
    
    int get(int key) 
    {
        return  arr[key]!=-1?arr[key]:-1;
    }
    
    void remove(int key) 
    {
        arr[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
