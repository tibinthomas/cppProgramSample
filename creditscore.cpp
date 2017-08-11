#include<iostream>
#include<vector>
using namespace std;
int main(){ 
    int num,noc,temp,fp,sp,flag=0,sum=0,i,j;
    cin>>num;
    vector<int> price;
    int creditscore;
    for(int k=1;k<=num;k++){
        cin>>creditscore;
        cin>>noc;
        for(int m=0;m<noc;m++){
            cin>>temp;
            price.push_back(temp);
        }
        for(i=0;i<noc-1;i++){
            for(j=i+1;j<noc;j++){
                sum=price[i]+price[j];
                if(sum==creditscore){
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            break;
        }
        cout<<"Case #"<<k<<": "<<++i<<" "<<++j<<"\n";
        price.clear();
        flag=0;
    }
}