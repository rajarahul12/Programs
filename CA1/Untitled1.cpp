#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

bool isPalindrome(int n){
	char *intStr;
	itoa(n,intStr,10);
	string s = string(intStr);
	cout<<s;
    return true;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i;
    cin>>n;
    int a[n];
    string s[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    char *intStr;
	itoa(55,intStr,10);
	string s1 = string(intStr);
	cout<<s1;
//    int t,start,end,count=0;
//    cin>>t;
//    while(t--){
//        cin>>start>>end;
//        for(i=start-1;i<end;i++){
//            if(isPalindrome(a[i]))
//                count++;
//        }
//        cout<<count<<"\n";
//    }
    
    return 0;
}

