/* Case:1

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=5,b=4;
    cout<<a<<" "<<b<<endl;
    a=a^b;                          // a = a ^ b
    
    b=b^a; 
                      
    // b ^ a = b ^ (a ^ b)
    //       = b ^ a ^ b        
    //       = 0 ^ a            ( Since b ^ b = 0 )
    //     b = a                ( Since 0 ^ a = a )
  

    a=a^b;
                          
    // a ^ b = a ^ (a ^ b)
    //       = a ^ a ^ b        
    //       = 0 ^ b            ( Since a ^ a = 0 )
    //     b = a                ( Since 0 ^ b = a )

  cout<<a<<" "<<b<<endl;
}
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        ans=ans^x;
    }
    cout<<ans<<endl;
}