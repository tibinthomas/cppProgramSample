#include <iostream>
#include <vector>
#include <cstring>
#include <cstdio>

using namespace std;

int main() {
  int numOfCases;
  vector <string> stringCollection;
  vector <char> reversedStringCollection;
  string oneLine;
  int begin=0,end=0;
  
  cin>>numOfCases;
  for(int a=0; a<numOfCases+1; a++) {     //+1 is used to deal with the first \n that comes just after the no. of strings.
    getline(cin, oneLine);
    stringCollection.push_back(oneLine);
  }
  
  for(int i=1; i<=numOfCases; i++) {
    reversedStringCollection.push_back('C');
    reversedStringCollection.push_back('a');
    reversedStringCollection.push_back('s');
    reversedStringCollection.push_back('e');
    reversedStringCollection.push_back(' ');
    reversedStringCollection.push_back('#');
    reversedStringCollection.push_back('0' + i);
    reversedStringCollection.push_back(':');
    for(int j=stringCollection[i].size(); j>=0; j--) {
      if(stringCollection[i][j] == ' ') {
        for(int k=begin,l=j; k<=end; k++,l++) {
          reversedStringCollection.push_back(stringCollection[i][l]);
        }
        begin = end;
      } else if (j == 0) {
          reversedStringCollection.push_back(' ');
          for(int k=begin,l=j; k<=end; k++,l++) {
            reversedStringCollection.push_back(stringCollection[i][l]);
          }
      } else {
          end++;
       }   
  	}
    reversedStringCollection.push_back('\n');
    begin=0;
    end=0;
  }
  for (vector<char>::const_iterator i = reversedStringCollection.begin(); i != reversedStringCollection.end(); ++i)
        if(isprint(*i) || *i == '\n') {
      cout<<*i;
    }
  
  
  return 0;
}