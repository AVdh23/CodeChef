#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    cout << n/2 + 1 << endl;
	}
	return 0;
}
/////////////////////////////////////////
/* // failed approach
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;//number of cupcakes
	    //package size?
	    //for cupcakes=5
	    //if pkg size=1, pkgs=5/1=5, leftover=5%1=0
	    //if pkg size=2, pkgs=5/2=2, leftover=5%2=1
	    //if pkg size=3, pkgs=5/3=1, leftover=5%3=2-- 
	    //if pkg size=4, pkgs=5/4=1, leftover=5%4=1--
	    //if pkg size=5, pkgs=5/5=1, leftover=5%5=0
	    
	    //no. of pkgs remain constant after pkg size=3
	    //leftover start declining after pkg size=3
	    
	    int pkg[n],leftover[n],index=0;
	    for(int i=1;i<=n;i++)
	    {
	        pkg[i]=n/i;
	        leftover[i]=n%i;
	    }
	    for(int i=1;i<=n;i++)
	    {
	       
	        if ((pkg[i]==pkg[i-1])||(leftover[i]<leftover[i-1])){
	            index=i-1;
	            break;
	        }
	        
	    }
	    cout<<index<<endl;
	    
	}
	return 0;
}
*/