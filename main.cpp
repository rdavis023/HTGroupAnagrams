#include "GroupAnagrams.h"


vector<vector<string>> groupAnagrams(const vector<string>& strings) {
  //   +=====================================================+
  //   |                 WRITE YOUR CODE HERE                |
  //   | Description:                                        |
  //   | - This function groups anagrams from a given vector |
  //   |   of strings.                                       |
  //   | - It uses an unordered_map for organization.        |
  //   | - It sorts each string to form a canonical version. |
  //   | - Groups strings with the same canonical form.      |
  //   |                                                     |
  //   | Return type: vector<vector<string>>                 |
  //   |                                                     |
  //   | Tips:                                               |
  //   | - 'anagramGroups' maps canonical strings to groups. |
  //   | - 'canonical' is a sorted version of each string.   |
  //   | - 'result' holds the final groups of anagrams.      |
  //   | - Check output from Test.cpp in "User logs".        |
  //   +=====================================================+
   // Map to hold the groups of anagrams
    unordered_map<string, vector<string>> anagramGroups;

    for (const string& str : strings) {
        // Sort the string to get its canonical form
        string canonical = str;
        sort(canonical.begin(), canonical.end());

        // Append the original string to the group of its canonical form
        anagramGroups[canonical].push_back(str);
    }

    // Prepare the result vector from the map
    vector<vector<string>> result;
    for (auto& group : anagramGroups) {
        result.push_back(group.second); // Add each group to the result
    }

    return result;
}