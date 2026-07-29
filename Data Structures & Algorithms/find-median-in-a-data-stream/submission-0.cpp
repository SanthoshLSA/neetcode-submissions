class MedianFinder {
    priority_queue<int> left;
    priority_queue<int,vector<int>,greater<int>> right;
public:
    MedianFinder() {
    }
    
    void addNum(int num) {
        left.push(num);
        if(!right.empty() && right.top()<left.top()){
            right.push(left.top());
            left.pop();
        }
        if(left.size()>right.size()){
            right.push(left.top());
            left.pop();
        }
        if(right.size()>left.size()){
            left.push(right.top());
            right.pop();
        }
    }
    
    double findMedian() {
        if(left.size()==right.size())return ((double)left.top()+right.top())/2.0;
        else if(left.size()>right.size())return left.top();
        else return right.top();
    }
};
