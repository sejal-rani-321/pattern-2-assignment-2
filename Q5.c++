
/*

1234321
123 321
12   21
1     1

*/
#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        cout<<i;
    }
    for (int i = n-1; i>= 1; i--)
    {
        cout<<i;

    }
    
        // if(i<=n-1) cout << i-- <<" ";
        // else i++;
    cout << endl;

    int m = n-1;//new lines
    int nsp = 1;
    for (int i = 1; i <= m; i++)
    { //star
        int a = 1;
        for (int j = 1; j <= m+1-i; j++)
        {
            cout<<a;
            a++;
        }
        //spaces
        for (int k = 1; k <= nsp; k++)
        {
            cout<<" ";
           a++;
        }
        nsp+=2;
        //star
        for (int j = 1; j <= m+1-i; j++)
        {
            cout<<2*n-a;
            a++;
        }
        cout << endl;
        
        
    }
    


    
}
