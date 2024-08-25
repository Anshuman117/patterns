#include<iostream>
using namespace std;
int main()
{
    for (int rows = 0; rows <5 ; rows++)
    {
        for (int col = 0; col < 5; col++)
        {
            if (rows==0||rows==4)
            {
                cout<<"*";
            }
            else if (col==0||col==4)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
            
            
        }
        cout<<endl;
        
    }
    
}