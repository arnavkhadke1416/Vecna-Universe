#include <iostream>
#include <vector>
#include <climits>
using namespace std;
 int main(){
vector<int> vec = {1,2,3,4,-4};
int size = vec.size();
int currsum=0;
int maxsum= INT_MIN;
for (int val:vec){
    currsum+=val;
    maxsum = max(currsum,maxsum);
    if( currsum<0){
        currsum=0;
    }
}
cout <<"The maximum sum of subarray is "<< maxsum;
return 0;
 }

