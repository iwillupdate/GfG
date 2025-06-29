class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        int n=arr.size();
        long long int result=0;
        map<long long int ,int>freq;
        long long int sum=0;
        freq[0]++;
        for(int i=1;i<=n;i++){
            sum+=arr[i-1];
            freq[sum]++;
            result+=freq[sum]-1;
        }
        return result;
     
    }
};