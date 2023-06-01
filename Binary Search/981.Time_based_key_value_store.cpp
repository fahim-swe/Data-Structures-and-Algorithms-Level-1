#include <bits/stdc++.h>
using namespace std;


class TimeMap {
public:

    unordered_map<string, map<int, string>> keyTimeMap;

    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        keyTimeMap[key][timestamp] = value;
    }
    
    string get(string key, int timestamp) {
        
        if(keyTimeMap.find(key) == keyTimeMap.end()){
            return "";
        }
        
        auto it = keyTimeMap[key].upper_bound(timestamp);

        if(it == keyTimeMap[key].begin()) return "";

        return prev(it)->second;
    }
};


int main()
{
    TimeMap T;

    T.set("foo", "bar", 1);
    cout << T.get("foo", 1) <<endl;
    cout << T.get("foo", 3) << endl;
    T.set("foo", "bar2", 4);
    cout << T.get("foo", 4) << endl;
    cout << T.get("foo", 5) << endl;


}