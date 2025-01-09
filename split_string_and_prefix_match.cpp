#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std ;

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        vector<string> result;
        stringstream ss(sentence); // Create a stringstream object
        string word;

        while (ss >> word) { // Extract words separated by spaces
            result.push_back(word);
        }

        int n1=result.size();
        int n2=searchWord.size();
        int c=-1;
        for(int i=0;i<n1;i++){
            if(result[i].substr(0,n2)==searchWord)
            return i+1 ;
        }
        return c ;
    }
};