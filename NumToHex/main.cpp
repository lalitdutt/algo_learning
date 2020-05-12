using namespace std;
#include<iostream>
#include<string>
#include<map>
class Solution {
        map<int,char> map1;
        int res;
public:
    string convert(int num){
              string result;
            while(num>0){
                   res=num/16;
                    result.push_back(res);
          }
    return result;
    }
        string decode(string result){
	        map1[10]='a';
       	        map1[11]='b';
   	        map1[12]='c';
    		map1[13]='d';
    		map1[14]='e';
    		map1[15]='f';

              for(int i=0;i<result.size();i++){
                      if(result[i]==10||11||12||13||14||15){
                              result[i]=map1[result[i]];
                      }
                }
                return result;
        }
    string toHex(int num) {
            string result=convert(num);
            result=decode(result);
            return result;
    }
};
int main(){
 Solution s1;
 cout<<s1.toHex(26)<<endl;
}
