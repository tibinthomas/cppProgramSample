
#include <string>
#include <limits>
#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;

int number_needed(string a, string b) {
   vector<int> checked_a(a.length(), 0);

   int fix=0;
   int bLength = b.length();
    
   checked_a.resize(a.length());
   
   for(int i=0; i<a.length(); i++) {
       int bIndex=b.find(a[i]);
       if(bIndex != -1) {
           checked_a[i]=1;
           b.erase((bIndex),1);
           fix++;
       }
   }
    return (count(checked_a.begin(), checked_a.end(), 0) + bLength - fix);
}

int main() {
    string a;
    getline(cin>>ws, a);
    string b;
    getline(cin>>ws, b);
    cout << number_needed(a, b) << endl;
    return 0;
}



// int number_needed(string a, string b) {
//     auto count = 0;
//     vector<int> freq(26, 0);
//     for (auto c : a) { ++freq[c - 'a']; }
//     for (auto c : b) { --freq[c - 'a']; }
//     for (auto val : freq) { count += abs(val); }
//     return count;
// }

//Tibin Thomas