#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int numBloco;  
    cin >> numBloco;
    int a[numBloco];
    for (int i = 0; i<numBloco; i++){
        cin >> a [i];
    }
    for (int i = numBloco-1; i>=0; i--){
        cout << a[i] << " "; 
    }

    return 0;
}