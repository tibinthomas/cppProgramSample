// #include <string>
// #include <iostream>
// #include <unordered_set>

// using namespace std;

// unordered_multiset<string> magazine, ransom;

// int main()
// {
//     size_t N, M;
//     cin >> N >> M;
    
//     if(N < M)
//     {
//         cout << "No";
//         return 0;
//     }
    
//     string str;
    
//     for(size_t i = 0; i < N; ++i)
//     {
//         cin >> str;
//         magazine.insert(str);
//     }
    
//     for(size_t i = 0; i < M; ++i)
//     {
//         cin >> str;
//         ransom.insert(str);
//     }
    
//     for(const auto& word : ransom)
//     {
//         auto found = magazine.find(word);
        
//         if(found == magazine.end())
//         {
//             cout << "No";
//             return 0;
//         }
        
//         magazine.erase(found);
//     }
//     cout << "Yes";
// }

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool ransom_note(vector<string> magazine, vector<string> ransom) {
    unordered_map<string, int> magazine_map;
    unordered_map<string, int> ransom_map;
    for (const auto& r: magazine) {
        magazine_map[r]++;
    }
    for (const auto& r: ransom) {
        ransom_map[r]++;
    }
    for (const auto& it: ransom_map) {
        if (magazine_map[it.first] < it.second) {
            return false;
        }
    }
    return true;
}

int main(){
    int m;
    int n;
    cin >> m >> n;
    vector<string> magazine(m);
    for(int magazine_i = 0;magazine_i < m;magazine_i++){
       cin >> magazine[magazine_i];
    }
    vector<string> ransom(n);
    for(int ransom_i = 0;ransom_i < n;ransom_i++){
       cin >> ransom[ransom_i];
    }
    if(ransom_note(magazine, ransom))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}

