#include <string>
#include <limits>
#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;

/*int number_needed(string a, string b) {
   vector<int> check_a(a.length(), 0);

   int fix=0;
   int bLength = b.length();
    
   check_a.resize(a.length());
   
   for(int i=0; i<a.length(); i++) {
       int bIndex=b.find(a[i]);
       if(bIndex != -1) {
           check_a[i]=1;
           b.erase((bIndex),1);
           fix++;
       }
   }
    return (count(check_a.begin(), check_a.end(), 0) + bLength - fix);
}
*/
int number_needed(string a, string b) {
    int bIndex,count=0,blength=b.length();
    for(int i=0; i<a.length(); i++) {        
        bIndex=b.find(a[i]);
        if(bIndex == -1)
            count++;
        else{
            blength--;
            b.erase((bIndex),1);
        }
    }
    return(count+blength);
}

int main() {
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}
