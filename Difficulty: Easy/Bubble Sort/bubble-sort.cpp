//{ Driver Code Starts
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int>& arr) {
        // har round mei adjacent to swap karo jab tak sab sort na ho jaaye
        //ye maanlo ki hum right mei sabse max ko laa rhe har baar
        
        for(int i=arr.size()-1 ; i>=0 ; i--){
            int didSwap=0;
            for(int j=0 ; j<=i-1 ; j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j] , arr[j+1]);
                    didSwap=1; // if at anytime the swap happened
                }
                
            }
            if(didSwap ==0) {// if array is already sorted then break the loop
            break;
            }
        }
        
    }
};


//{ Driver Code Starts.

// Driver program to test above functions
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;

        ob.bubbleSort(arr);
        for (int e : arr) {
            cout << e << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends