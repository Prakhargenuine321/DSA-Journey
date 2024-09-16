#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minValidStrings(vector<string>& words, string target) {
        int targetSize = target.length();
        int wordsArr = words.size();
        
        int index = 0;  // To track position in target
        int total = 0;  // Count the number of valid concatenations

        while (index < targetSize) {
            int maxi = 0;  // Reset maxi for each position in target

            // Check all words to see if any can match a prefix starting at index
            for (int i = 0; i < wordsArr; i++) {
                int count = 0;
                int k = index;
                
                // Check if word[i] is a valid prefix starting at index
                for (int j = 0; j < words[i].size() && k < targetSize; j++, k++) {
                    if (words[i][j] == target[k]) {
                        count++;
                    } else {
                        break;  // If characters don't match, stop checking this word
                    }
                }
                
                // Track the longest valid prefix
                maxi = max(maxi, count);
            }

            // If no valid prefix was found, return -1
            if (maxi == 0) {
                return -1;
            }

            // Move the index forward by the length of the longest valid prefix
            index += maxi;
            total++;  // Increment the count of valid strings used
        }

        return total;  // Return total number of valid concatenations
    }
};

int main() {
    Solution solution;
    
    vector<string> words1 = {"b", "ccacc", "a"};
    string target1 = "cccaaaacba";
    cout << "Minimum valid strings for the test case: " << solution.minValidStrings(words1, target1) << endl;  // Expected output: 8

    return 0;
}
