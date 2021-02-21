bool isTripletPresent(vector<int> arr, int target) {
    // NON SORTED ARRAY 
    // O(N^2) APPROACH
    // FOR OPTIMIZED APPROACH, SEE NEXT FUNCTION
    int N=arr.size();
    for(int i=0;i<N-2;i++) {
        for(int j=i+1;j<N-1;j++) {
            for(int k=j+1;k<N;k++) {
                if(arr[i]+arr[j]+arr[k]==target) return 1;
            }
        }
    }
    return 0;
}

bool isTripletPresent(vector<int> arr, int target) {
    // ARRAY MUST BE SORTED 
    // USES MAP OR SET
    int N=arr.size(),j,k;
    for(int i=0;i<N-1;i++) {
        j=i+1;
        k=N-1;
        while(j<k) {
            int sum=arr[i]+arr[j]+arr[k];
            if(sum==target) return 1;
            else if(sum>target) k--;
            else j++;
        }
    }
    return 0;
}

bool isTripletPresent(vector<int> arr, int target) {
    int N=arr.size();
    for(int i=0;i<N-1;i++) {
        unordered_set<int> st;
        int currSum = target - arr[i];
        for(int j=i+1;j<N;j++) {
            if(st.find(currSum-arr[j])!=st.end()) return 1;
            st.insert(arr[j]);
        }
    }
    return 0;
}