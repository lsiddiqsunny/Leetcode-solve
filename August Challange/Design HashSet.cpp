class MyHashSet {
public:
    /** Initialize your data structure here. */
    int *a;
    MyHashSet() {
        a = new int [1000005];
        for(int i=0;i<1000005;i++){
            a[i]=0;
        }
    }
    
    void add(int key) {
        if(contains(key)) return;
        a[key]++;
    }
    
    void remove(int key) {
        if(a[key]==0) return;
        a[key]--;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return a[key]!=0;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */