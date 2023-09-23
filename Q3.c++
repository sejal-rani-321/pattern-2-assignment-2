/*

      A
    B A B
  C B A B C
D C B A B C D

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    int st= 1;
    int space = n-1;
    for (int i = 1; i <= n; i++)
    {
        for (int sp = 0; sp <=space; sp++)
        {
            cout << " ";
        }
        space--;
        for (int j = 1; j <= st; j++)
        {
           cout <<( char)(i-j+64);
        }
        st+=2;
        cout<<endl;
        
        
        
    }
    

}
