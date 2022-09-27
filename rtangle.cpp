#include <iostream>
using namespace std;
 
// Driver Code
int main()
{
    int n;
    cout<<"enter no.rows";
    cin>>n;
   
    
    for(int i=n; i>0; i--)
    {
      for(int j=0; j<=n; j++) 
      {
        if (j>=i)
        {
          cout<<"*";
        }
        else
        {
          cout<<" ";
        }
      }
      cout<<endl;
    }
    return 0;
}
