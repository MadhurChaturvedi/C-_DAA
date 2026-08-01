#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int target){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;

    // implemnting the bindary search 
    while(start<=end){
        int element = arr[mid];
        if(element == target){
            return mid;
        }
        else if(target<element){
            end = mid-1;
        }
        else{
            start=mid+1;
        }
        mid = (start+end)/2;
    }
    return -1;

}


int main() 
{
    int arr[] = {1,2,4,5,6,7,8,12,15};
    int size = 10;
    int target=7;
    int indexofTarget = binarySearch(arr,size,target);
    if(indexofTarget==-1){
        cout<<"Target Not Found"<<endl;
    }
    else{
        cout<<"Target found at index of : " << indexofTarget;
    }
    return 0;
}