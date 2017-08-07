#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
  int num;
  vector <string> :: reverse_iterator it;
  cin>>num;
  
  cin.clear();		//Clears Buffer
  cin.ignore();
  string word=" ";
  vector<string> ln;
  string line;
  for(int k =1;k<=num;k++){
    getline(cin,line);
    
    for(int i=0,j=0;line[i]!='\0';i++,j++){
      if(line[i]==' '){
        j=0;
        ln.push_back(word);
        word="";
      }
      word.push_back(line[i]);
    }
    ln.push_back(word);
    cout<<"Case #"<<k<<":";
    for(it=ln.rbegin();it!=ln.rend();it++){
      cout<<*it;
    }
    cout<<"\n";
    ln.clear();
    line="";
    word=" ";
  }
}