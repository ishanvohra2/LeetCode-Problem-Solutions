#include <iostream>

using namespace std;

class WordDictionary {
    class TrieWord
    {    
    public:
        bool isWord;
        TrieWord *children[26]; 
        TrieWord(){
            isWord = false;
            fill_n(children, 26, nullptr);
        }
        ~TrieWord();
    };

    private:

    TrieWord *root;
    
public:
    /** Initialize your data structure here. */
    WordDictionary() {
        root = new TrieWord();
    }
    
    /** Adds a word into the data structure. */
    void addWord(string word) {
        TrieWord *current = root;
        for(const char &c : word){
        if(!current->children[c-'a']) current->children[c-'a'] = new TrieWord();
            current = current->children[c-'a'];
        }
        current->isWord = true;
    }

    bool check(const char* s, TrieWord* node)
    {
        for(int i = 0; s[i]; ++i)
        {
            if(!node) return false;
            if(s[i] == '.') 
            {
                for(int j = 0; j < 26; ++j) 
                    if(check(s+i+1, node->children[j])) return true;
                return false;
            }
            else node = node->children[s[i]-'a'];
        }
        return node && node->isWord;
    }
    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word) {
        return check(word.c_str(), root);
    }
};

int main(){

    return 0;
}