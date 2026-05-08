class MyHashSet {
public:
    vector<bool> mpp;
    MyHashSet() {
        mpp.resize(1000001,false);
    }
    
    void add(int key) {
        mpp[key] = true;
    }
    
    void remove(int key) {
        mpp[key] = false;
    }
    
    bool contains(int key) {
        return mpp[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */