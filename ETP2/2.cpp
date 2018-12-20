#include <bits/stdc++.h>
#include<iostream> 
using namespace std;   
int LCS(string str1, string str2, int m, int n ) 
{ 
  int L[m+1][n+1]; 
  int i, j; 
  for (i=0; i<=m; i++) 
  { 
    for (j=0; j<=n; j++) 
    { 
      if (i == 0 || j == 0) 
        L[i][j] = 0; 
   
      else if (str1.at(i-1) == str2.at(j-1)) 
        L[i][j] = L[i-1][j-1] + 1; 
   
      else
        L[i][j] = max(L[i-1][j], L[i][j-1]); 
    } 
  } 
     

  return L[m][n]; 
} 

void display(string str1, string str2)   
{ 
   int m = str1.size(); 
   int n = str2.size(); 
     
   int len = LCS(str1, str2, m, n); 
   cout<<(m - len)<<endl;
   cout <<(n - len) << " edit "; 
   cout << (m - len)-(n - len) <<" delete"<<endl; 
       
     
} 

int main() 
{ 
 int t;
 cin>>t;
 int length1,length2;
 for(int i=0;i<t;i++){
 cin>>length1>>length2;
 string str1 ,str2;
 cin>>str1>>str2;    
 display(str1, str2);  }
 return 0; 
}
