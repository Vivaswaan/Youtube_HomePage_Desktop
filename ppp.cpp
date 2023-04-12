#include<bits/stdc++.h>
using namespace std;
int main(){
    int arj;
    cin>>arj;
    while(arj>0){
        int n,paise;cin>>n>>paise;
        int arr[n], bill=0;
        for(int v=0;v<n;v++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int w=0;
        while(w<n){
            while(arr[w]==arr[w+1] && w<n-1){
                w++;
            }w++;bill++;
            if(arr[w]!=arr[w+1] && w<n-1){
                w++;bill+=paise;
            }
        }
        cout<<bill<<endl;
        arj--;
    }
}