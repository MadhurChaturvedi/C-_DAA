#include <bits/stdc++.h>
using namespace std;

int firstOccurence(vector<int> &arr,int target){
    int s =0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    
    while(s<=e){
        if(arr[mid] == target){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid]>target){
            e = mid - 1;
        } 
        else if(arr[mid]<target){
            s = mid + 1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int lastOccurence(vector<int> &arr,int target){
    int s =0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    
    while(s<=e){
        if(arr[mid] == target){
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid]>target){
            e = mid - 1;
        } 
        else if(arr[mid]<target){
            s = mid + 1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main() 
{
    // arr = [1,2,4,4,4,5] - input 4 first occurence is 2 implemnt this
    vector<int>v{1,3,4,4,4,4,6,7};
    int target=4;
    int indexOffirstOccurence = firstOccurence(v,target);
    int indexLastOccurence = lastOccurence(v,target);
    cout<< indexOffirstOccurence << endl;
    cout<< indexLastOccurence << endl;
    
    return 0;
}