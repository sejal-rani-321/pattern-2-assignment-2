/*

    1
   2  2
  3    3
 4      4

*/

#include<iostream>
using namespace std;

int main(){
    int n = 4;
   /*for (int i = 1; i <= n; i++){
       for (int k =1 ; k <= n-i; k++){
        cout << " ";
       } cout <<i;
       for (int j = 1; j <= 2*i-2; j++){
       cout << " ";
       }if(i <= n) cout << i;
       cout << endl;
    } */
    
    for (int i = 1; i <= n; i++){
       for (int k =1 ; k <= n; k++){
        if(i+k==n+1) cout << i << " ";
       else  cout << " ";
       } 
       for (int j = 1; j <= n-1; j++){
       if(j==i-1) cout << i << " ";
       else cout << " ";
       }
       cout << endl;
    }
    

    
}