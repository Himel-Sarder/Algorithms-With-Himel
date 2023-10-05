#include<bits/stdc++.h>

using namespace std;

	int search(int arr[], int n, int k) {
	    for(int i = 0; i < n; i++){
	        if(arr[i] == k)
	            return i + 1;
	        else
	            continue;
	    }
	    return -1;
	}

int main(){
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int result = search(arr,n,k);
    if(result == -1){
        cout << "Element not found";
    }
    else{
        cout << "Element found in " << result << " position";
    }
}








