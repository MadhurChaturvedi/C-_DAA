#include <iostream>
#include <vector>
using namespace std;


int findPivot(vector<int>arr){
    int s =0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid-1]>arr[mid]){
            return mid-1;
        }
        else if(arr[s]>=arr[mid]){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int main() 
{
    vector<int>arr{3,4,5,6,7,1,2};
    int ans = findPivot(arr);
    if(arr[ans] == -1){
        cout<<"Not found the Pivot Elemnt";
    }
    else{
        cout<<"Found the Pivot element : "<<arr[ans];
    }
    return 0;
}

------------------------
class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int totalSum = 0;
        int i = 0;

        // Calculate total sum
        while (i < nums.size()) {
            totalSum += nums[i];
            i++;
        }

        int leftSum = 0;
        i = 0;

        // Find pivot index
        while (i < nums.size()) {

            int rightSum = totalSum - leftSum - nums[i];

            if (leftSum == rightSum) {
                return i;
            }

            leftSum += nums[i];
            i++;
        }

        return -1;
    }
};

-----------------------------------
// optimal soltion 
#include <iostream>
#include <vector>
using namespace std;


int findPivot(vector<int>arr){
    int s =0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(arr[mid+1]<arr.size() && arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid-1]>0 && arr[mid-1]>arr[mid]){
            return mid-1;
        }
        else if(arr[s]>=arr[mid]){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int main() 
{
    vector<int>arr{3,4,5,6,7,1,2};
    int ans = findPivot(arr);
    if(arr[ans] == -1){
        cout<<"Not found the Pivot Elemnt";
    }
    else{
        cout<<"Found the Pivot element : "<<arr[ans];
    }
    return 0;
}