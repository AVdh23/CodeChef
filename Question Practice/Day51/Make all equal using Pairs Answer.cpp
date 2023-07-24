#include <iostream>
using namespace std;
int const N = 1000 + 10;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    int arr[N] = {0};
	    int max=0, index=0, count=0;
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    for(int i=0; i<n; i++){
	        arr[a[i]]++;
	    }
	    for(int i=0; i<N; i++){
	        if(arr[i]>max){
	            max = arr[i];
	            index = i;
	        }
	    }
	    for(int i=0; i<n; i++){
	        if(a[i] != index){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}