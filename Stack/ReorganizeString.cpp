/*
    Time Complexity: O(N)
    Space Complexity: O(1)

    Where 'N' is the number of characters in string.
*/

// Comparator function for priority_queue.
struct cmp {
    bool operator()(pair < char, int > a, pair < char, int > b) {
        if (a.second == b.second)
            return a.first < b.first;
        return a.second < b.second;
    }
};

string rearrangeString(string &str) {
    // Store the frequecy of characters.
    vector < int > hash(26, 0);
    // Max heap store the most frequent element at top.
    priority_queue < pair < char, int > , vector < pair < char, int >> , cmp > myPQ;

    for (int i = 0; i < str.size(); i++) {
        hash[str[i] - 'a'] += 1;
    }
    // Pushing the pairs to priority_queue.
    for (int i = 0; i < 26; i++) {
        if (hash[i] > 0) {
            myPQ.push({char(i + 'a'),hash[i]});
        }
    }
    // The resultant string.
    string ans = "";

    // Iterate while priority queue is having length greater than 1.
    while (myPQ.size() > 1) {
        pair < char, int > mostFreq = myPQ.top();
        myPQ.pop();
        pair < char, int > sec_mostFreq = myPQ.top();
        myPQ.pop();

        ans += mostFreq.first;
        ans += sec_mostFreq.first;

        mostFreq.second -= 1;
        sec_mostFreq.second -= 1;

        if (sec_mostFreq.second > 0) {
            myPQ.push(sec_mostFreq);
        }
        if (mostFreq.second > 0) {
            myPQ.push(mostFreq);
        }

    }
    // If priority queue is empty, return the resultant string.
    if (myPQ.size() == 0) {
        return ans;
    }
    // Else check if there is a solution or not.
    else {
        if (myPQ.top().second > 1) {
            return "NO SOLUTION";
        } else {
            return ans + myPQ.top().first;
        }
    }
}