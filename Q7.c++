
/*

    *
   * *
  *   *
 *     *
  *   *
   * *
    * 

*/

#include<iostream>
using namespace std;

int main(){
    int n = 4;
    int m = 6;
    
    for (int i = 1; i <= n; i++)
    {   for (int j = 1; j <= n; j++)
        { if(i+j==m+1) cout<<"*";
           else cout << " ";
        }
        for (int j = 1; j <= n-1; j++)
        { if(j==i-1) cout<<"*";
           else cout << " ";
        }
        cout << endl;
    }
     
    for (int i = 1; i <= n; i++)
    {
        
        for (int j = 1; j <= i; j++)
        {
           cout << " ";
        }
        cout << "*";
        for (int k = 1; k <=2*(n-i)-1; k++)
        {
            cout << " "; 
        }
        if(i<n) cout << "*";
    cout << endl;
        
     
    }
}


