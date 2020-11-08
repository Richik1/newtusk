#include<bits/stdc++.h>
using namespace std;
int main(){
      int arr[10]={1,2,3,3,6,7,8,9,3,5};
      int res=INT_MIN,curr_sum=arr[0];
      for(int i=1;i<10;i++){
         curr_sum=max(curr_sum,curr_sum+arr[i]);
         res=max(res,curr_sum);
      }
      cout<<res<<" ";
      return 0;
}
