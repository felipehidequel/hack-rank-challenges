#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a[]={"Greater than 9","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    if(n>9){
        cout<<a[0]<<endl;
    }else{
        cout<<a[n]<<endl;
    }
    
    return 0;
}