/*

*     *
**   **
*** ***
*******
*******
*** ***
**   **
*     *

*/

#include<iostream>
using namespace std;

int main(){
    int n = 4;

     int m = n-1;//new lines
    int nsp = 2*m-1;
    for (int i = 1; i <= m; i++)
    { //star
        for (int j = 1; j <=i; j++){
            cout << "*";
        }
        //spaces
        for (int k = 1; k <= nsp; k++){
            cout<< " ";
        }
        nsp-=2;
        //star
        for (int j = 1; j <= i; j++)
        {
            cout <<"*";
        }
        cout << endl;
        
        
    }
    for (int i = 1; i <= 2*n-1; i++){
        cout <<"*";
    }
    cout << endl;
    for (int i = 1; i <= 2*n-1; i++){
        cout <<"*";
    }
    cout << endl;
    nsp = 1;
    for (int i = 1; i <= m; i++)
    { //star
        for (int j = 1; j <=m+1-i; j++){
            cout << "*";
        }
        //spaces
        for (int k = 1; k <= nsp; k++){
            cout<< " ";
        }
        nsp+=2;
        //star
        for (int j = 1; j <= m+1-i; j++)
        {
            cout <<"*";
        }
        cout << endl;   
    }
}