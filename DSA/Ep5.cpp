#include<bits/stdc++.h>
using namespace std;
/*
int main()
{
    string s="BHAVESH";       // STRING DECLARATION 
    cout<<s<<endl;
    cout<<s[0]<<endl;
    cout<<s[1]<<endl;        // PRINT SINGLE CHARACTER FROM THE STRING
    cout<<s[2]<<endl;
    cout<<s[3]<<endl;
    cout<<s[4]<<endl;
    cout<<s[5]<<endl;
    cout<<s[6]<<endl;

    cout<<s<<endl;
    cout<<s.size()<<endl;     // size() :--> DISPLAY THE SIZE OF STRING

    // ASSIGNING OR CHANGING THE ELEMENT OR CHARACTER IN A STRING

    s[5]='a';
    cout<<s<<endl;     // HERE THIS WILL CHANGE THE ELEMENT AT THE 6 POSITION OF STRING. LIKEWISE WE CAN CHANGE ANY OTHER ELEMENT ALSO .

    // CHARACTER IS WRITTEN IN SINGLE LIKE 'a' WHEREAS THE STRING IS COLLECTION OF CHARACTER THEREFORE IT IS WRITTEN IN THE DOUBLE COTES LIKE "Bhavesh"
    return 0;
}
*/

/*
int main()
{
    string s;
    string n;
    cin>>s>>n;
    string d= s+n;       // HERE '+' SIGN IS CONCATINATING THE STRINGS like Bhavesh Modi--> BhaveshModi
    cout<<d;
    return 0;
}
*/

/*
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<endl;
    }
    return 0;
}   */

/*
int main()
{
    string s,n;
    cin>>s>>n;
    string d=s+" "+n;    // refer notebook notes
    cout<<d;
} */

/*
int main()
{
    string s;
    string n;
    getline(cin,s);
    cout<<s;
}  */

/*
int main()
{
    string s;
    cin>>s;
    string rev;
    for(int i=s.size();i>=0;i--)
    {
       rev.push_back(s[i]);
    }
    cout<<rev;    // This will print reverse of a string

    // LOGIC FOR PALINDROME IN CONTINUATION WITH THE REVERSE
    
    if(s==rev)
    {
        cout<<"\nThe given string is a palindrome";
    }
    else
    {
        cout<<"\nThe string is not a palindrome ";
    }
    return 0;
}  */