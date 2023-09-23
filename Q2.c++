/*
   A
  ABC
 ABCDE
ABCDEFG

*/

#include<iostream>
using namespace std;

int main(){
    int n  ;
    cout << "n : " <<endl;
    cin >>n;
    int star = 1;
    int space = n-1;
    for (int i = 1; i <= n; i++)
    {    //space
        for (int k = 1; k <= space; k++)
        {
            cout <<  " ";
        }
        space--;
        for (int j = 1; j <= star; j++)
        {
            cout << (char)(64 +j);
        }
        star+=2;
        cout << endl;
        
        
    }
    
    }