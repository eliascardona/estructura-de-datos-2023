#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

namespace dynamic_programming {
    namespace shortest_common_supersequence {
        
        /**
         * Function implementing Shortest Common Super-Sequence algorithm using look-up table method.
         * @param str1 first string 'X'
         * @param str2 second string 'Y'
         * @returns string 'Z', superSequence of X and Y 
        */
        std::string scs(const std::string &str1, const std::string &str2) {

            // Edge cases
            // If either str1 or str2 or both are empty
            if(str1.empty() && str2.empty()) {
                return "";
            }
            else if(str1.empty()) {
                return str2;
            }
            else if(str2.empty()) {
                return str1;
            }

            // creating lookup table
            std::vector <std::vector <int>> lookup(str1.length() + 1, std::vector <int> (str2.length() + 1, 0));
      
            for(int i=1; i <= str1.length(); i++) {
                for(int j=1; j <= str2.length(); j++) {
                    if(str1[i-1] == str2[j-1]) {
                        lookup[i][j] = lookup[i-1][j-1] + 1;
                    }
                    else {
                        lookup[i][j] = std::max(lookup[i-1][j], lookup[i][j-1]);
                    }
                }
            }

            // making supersequence
            // i and j are initially pointed towards end of strings
            // Super-sequence will be constructed backwards
            int i=str1.length();
            int j=str2.length();
            std::string s;
      
            while(i>0 && j>0) {

                // If the characters at i and j of both strings are same
                // We only need to add them once in s
                if(str1[i-1] == str2[j-1]) {
                    s.push_back(str1[i-1]);
                    i--;
                    j--;
                }
                // otherwise we check lookup table for recurrences of characters
                else {
                    if(lookup[i-1][j] > lookup[i][j-1]) {
                        s.push_back(str1[i-1]);
                        i--;
                    }
                    else {
                        s.push_back(str2[j-1]);
                        j--;
                    }
                }
            }

            // copying remaining elements
            // if j becomes 0 before i
            while(i > 0) {
                s.push_back(str1[i-1]);
                i--;
            }

            // if i becomes 0 before j
            while(j > 0) {
                s.push_back(str2[j-1]);
                j--;
            }

            // As the super sequence is constructd backwards
            // reversing the string before returning gives us the correct output  
            reverse(s.begin(), s.end());
            return s;
        }
    } // namespace shortest_common_supersequence
} // namespace dynamic_programming


static void test() {
    // custom input vector
    std::vector <std::vector <std::string>> scsStrings {
        {"ABCXYZ", "ABZ"},
        {"ABZ", "ABCXYZ"},
        {"AGGTAB", "GXTXAYB"},
        {"X", "Y"},
    };

    // calculated output vector by scs function
    std::vector <std::string> calculatedOutput(4, "");
    int i=0;
    for(auto & scsString : scsStrings) {
        
        calculatedOutput[i] = dynamic_programming::shortest_common_supersequence::scs(
            scsString[0], scsString[1]
        );
        i++;
    }

    // expected output vector acc to problem statement
    std::vector <std::string> expectedOutput {
        "ABCXYZ",
        "ABCXYZ",
        "AGGXTXAYB",
        "XY"
    };

    // Testing implementation via assert function
    // It will throw error if any of the expected test fails
    // Else it will give nothing
    for(int i=0; i < scsStrings.size(); i++) {
        assert(expectedOutput[i] == calculatedOutput[i]);
    }

    std::cout << "All tests passed successfully!\n";
    return;
}

/* Main function */
int main() {
    // test for implementation
    test();

    // user input
    std::string s1, s2;
    std::cin >> s1;
    std::cin >> s2;

    std::string ans;

    // user output
    ans = dynamic_programming::shortest_common_supersequence::scs(s1, s2);
    std::cout << ans;
    return 0;
}




