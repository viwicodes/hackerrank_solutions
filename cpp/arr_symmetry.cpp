#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int cnt1 = 0, cnt2 = 0;
        char arr[N][N];
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin>>arr[i][j];
            }
        }

        // Main logic

        for(int i=0;i<N/2;i++){
            for(int j=0;j<N;j++){
                if(arr[i][j]==arr[N-i-1][j]){
                    if(arr[j][i]==arr[j][N-i-1]){
                        cnt1++;
                        continue;
                    }
                    else{
                        cnt2++;
                        break;
                    }
                }
                else{
                    cnt2++;
                    break;
                }
            }
        }

        if(cnt1 > 0 && cnt2 == 0){
            cout<<"YES"<<endl;
        }
        else{cout<<"NO"<<endl;}
    }
}