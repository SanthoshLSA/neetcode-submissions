class MedianFinder {
private:
priority_queue<int> low;
priority_queue<int,vector<int>,greater<int>> high;
public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(low.empty()&&high.empty())low.push(num);
        else if(low.empty()){
            if(high.top()>num)low.push(num);
            else high.push(num);
        }
        else if(high.empty()){
            if(low.top()>num)low.push(num);
            else high.push(num);
        }
        else if(low.top()<num)high.push(num);
        else low.push(num);
        
        if(low.size()>high.size()+1){
            high.push(low.top());
            low.pop();
        }
        if(high.size()>low.size()+1){
            low.push(high.top());
            high.pop();
        }


    }
    
    double findMedian() {
        if(low.size()>high.size())return low.top();
        else if(low.size()<high.size())return high.top();
        else return (low.top()+high.top())/2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */