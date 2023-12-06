#include<iostream>
using namespace std;
class Solution {
    long long res=0;
public:
    long long minimumSteps(string s) {
        for(int i=s.length()-1;i>=0;i-- ){
             if(s[i]!='1'){
               int j=i;
               while(s[j]=='0'&&j>0) j--;
              if(j==0){
                //return res;
                //if(s[0]=='0') return res;  
                //if(s[0]=='1') return res+=i; 
              }              
                 swap(s[i],s[j]);
                std::cout<<s<<std::endl;
                res+=i-j;                
            }
          
            
        }
        return res;
    }
};

int main()
{
    Solution s;
    cout<<s.minimumSteps("1000111")<<endl;

}