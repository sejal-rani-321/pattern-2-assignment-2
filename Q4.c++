/*

ABCDEFG
ABC EFG
AB   FG
A     G

*/

#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for (int i = 1; i <= 2*n-1; i++)
    {
        cout <<(char) (i+64);
    }
    cout << endl;

    // int m = n-1;//new lines
    int nsp = 1;
    for (int i = 1; i <= n-1; i++)
    { //star
        int a = 1;
        for (int j = 1; j <=n-i; j++)
        {
            cout << (char)(64+a);
            a++;
        }
        //spaces
        for (int k = 1; k <= nsp; k++)
        {
            cout<< " ";
            a++;
        }
        nsp+=2;
        //star
        for (int j = 1; j <= n-i; j++)
        {
            cout <<(char)(64+a);
            a++;
        }
        cout << endl;
        
        
    }
    


    
}
