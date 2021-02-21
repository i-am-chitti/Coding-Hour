bool isPairPresent(vector<int> arr, int target) {
    //ARRAY MUST BE SORTED
    int sum=0,i=0,j=arr.size()-1;
    while(i<j) {
        sum=arr[i]+arr[j];
        if(sum==target) return 1;
        else if(sum>target) j--;
        else i++;
    }
    //finally
    return 0;
}

bool isPairPresent(vector<int> arr, int target) {
    map<int,int> mp;
    int N=arr.size();
    for(int i=0;i<N;i++) {
        if(mp[target-arr[i]]!=0) return 1;
        else mp[arr[i]]++;
    }
    return 0;
}