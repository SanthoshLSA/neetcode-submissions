class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26, 0);
        for (char c : tasks)
            freq[c - 'A']++;

        priority_queue<int> pq;
        for (int x : freq)
            if (x) pq.push(x);

        queue<pair<int,int>> q; // {remaining count, available time}
        int time = 0;

        while (!pq.empty() || !q.empty()) {

            if (!q.empty() && q.front().second == time) {
                pq.push(q.front().first);
                q.pop();
            }

            if (!pq.empty()) {
                int cnt = pq.top();
                pq.pop();
                cnt--;

                if (cnt > 0)
                    q.push({cnt, time + n + 1});
            }

            time++;
        }

        return time;
    }
};