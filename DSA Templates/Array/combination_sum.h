/*
Give an array of integers and a target, find if sum of any number of its element would equal to the target.
Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]
*/

//if sum is possible
bool isSumPossible(vector<int> &arr, int target) {
    if(target==0) return 1;
    else if(target<0) return 0;
    for(int i=0;i<arr.size();i++) {
        if(isSumPossible(arr,target-arr[i])) return 1;
    }
    return 0;
}

// all 2-D array of all sets of elements whose sum would be the target
void allSums(vector<int> &arr, int target, vector<int> &temp, vector<vector<int>> &res, int i) {
    if(target==0) res.push_back(temp);
    else if(target<0) return;
    while(i<arr.size() && target>=arr[i]) {
        temp.push_back(arr[i]);
        allSums(arr,target-arr[i],temp,res,i);
        temp.pop_back();
        i++;
    }
}

// no of sets of elements whose sum would be the target
void countAllSums(vector<int> &arr, long long int target, long long int &res, long long int i) {
    if(target==0) {
        res++;
        return;
    }
    else if(target<0) return;
    while(i<arr.size() && arr[i]<=target) {
        recur(arr,target-arr[i],res,i);
        i++;
    }
}