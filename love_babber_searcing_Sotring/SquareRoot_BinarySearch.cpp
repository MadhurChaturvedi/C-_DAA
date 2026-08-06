#include <iostream>
using namespace std;

int findSquarRoot(int n){
    int target = n;
    int ans = -1;
    int s=0;
    int e=n;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(mid*mid == target){
            return mid;
        }
        if(mid*mid>target) e = mid - 1;
        else {
            ans = mid;
            s = mid +1;
        }
        mid = s+(e-s)/2;
    }
    return mid;
}

int main() 
{
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;

    int Square = findSquarRoot(n);
    cout<<"The Square Root of "<< n << " is : "<<Square; 
    return 0;
}