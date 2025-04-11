#include <iostream> 
using namespace std;
#include <vector>
#include <algorithm>    

struct TrieNode {
    TrieNode* children[2];
    TrieNode() {
        children[0] = children[1] = nullptr;
    }
};

// 插入一个数到字典树中
void insert(TrieNode* root, int num) {
    TrieNode* node = root;
    for (int i = 31; i >= 0; --i) {
        int bit = (num >> i) & 1;
        if (!node->children[bit]) {
            node->children[bit] = new TrieNode();
        }
        node = node->children[bit];
    }
}

int beautyValue(vector<int>& a) {
    
}

int main() {
    int t = 0;
    cin >> t;
    while (t--) {
       int n = 0;
       int k=0;
       cin >> n >> k;

       vector<int> a(n);
       for (int i = 0; i < n; i++) {
           cin >> a[i];
       }

    }

    
}