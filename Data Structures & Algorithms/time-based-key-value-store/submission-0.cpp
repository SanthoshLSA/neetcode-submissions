class TimeMap {
private:
unordered_map<string,vector<pair<int,string>>> tmap;
public:
    TimeMap() {
     
    }
    
    void set(string key, string value, int timestamp) {
        tmap[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        if(!tmap.count(key) || tmap[key][0].first>timestamp)return "";
        int low = 0;
        int high = tmap[key].size()-1;
        int ans = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(tmap[key][mid].first<=timestamp){
                low = mid+1;
                ans = mid;
            }
            else{
                high = mid-1;
            }  
        }
        if(ans==-1)return "";
        return tmap[key][ans].second;
    }  
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */