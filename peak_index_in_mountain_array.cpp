#include<iostream>
#include<algorithm>
#include<vector>


int peakIndex(std::vector<int> arr){
    int start = 0;
    int end = arr.size() - 1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if( start == end ||(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])){
            return mid;
        }
        if(arr[mid] > arr[mid+1] && arr[mid] < arr[mid - 1]){
            end = mid;
        }
        else {start = mid + 1;}


    }
    return -1;
}
int main(){
    std::vector<int> arr = {0,5,10,5,2,1,0};
    int x = peakIndex(arr);
    std::cout<< x;
}