// class RandomizedSet {
// private:
// unordered_set<int> randomSet;
// mt19937 mt;
// public:
//     RandomizedSet() {
        
//     }
    
//     bool insert(int val) {
//         auto it = randomSet.find(val);
//         if(it != randomSet.end()) return false;
//         else
//         {
//             randomSet.insert(val);
//             return true;
//         }
//     }
    
//     bool remove(int val) {
//         auto it = randomSet.find(val);
//         if(it == randomSet.end()) return false;
//         else
//         {
//             randomSet.erase(it);
//             return true;
//         }
//     }
    
//     int getRandom() {
    
//     int element;

//     sample(randomSet.begin(), randomSet.end(), &element, 1, mt);

//     return element;
//     }
// };

class RandomizedSet {
private:
    std::unordered_map<int, int> mymap;
    std::vector<int> list;
public:
    RandomizedSet() {
    }
    
    bool insert(int val) {
        if(mymap.count(val) != 0) return false;
        mymap[val] = list.size(); 
        list.push_back(val); 
        return true;
    }
    
    bool remove(int val) {
        if(mymap.count(val) != 0)
        {
            int index = mymap[val], lastvalue = list.back(); 
            list[index] = lastvalue; 
            list.pop_back();
            mymap[lastvalue] = index;
            mymap.erase(val);
            return true;
        }
        return false;
        
    }
    
    int getRandom() {
        int randomIndex = std::rand() % list.size();
        return list[randomIndex];
    }
};


/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */