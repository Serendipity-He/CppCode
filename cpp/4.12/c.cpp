#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t=0;
    cin>>t;
    while (t--) {
       int n=0;
       int k=0;
       int x=0;
       cin>>n>>k>>x;
       vector<int> a(n);
       for (int i = 0; i < n; i++) {
           cin>>a[i];
        }
        vector<int> b(n*k);
        for (size_t i = 0; i < n*k; i++)
        {
            b[i]=a[i%n];
        }
        int count=0;
        for (size_t i = 0; i < n*k; i++)
        {
            
        }

    }


}