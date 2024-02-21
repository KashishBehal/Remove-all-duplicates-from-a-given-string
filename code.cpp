class Solution{
public:
	string removeDuplicates(string str) {
	     string ans = "";
        unordered_set<char> seen;

        for (char c : str) {
            if (seen.find(c) == seen.end()) {
                ans.push_back(c);
                seen.insert(c);
            }
        }

        return ans;
	}
};
