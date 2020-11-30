
#include <bits/stdc++.h>
using namespace std;

void factorize(int n) {
    bool vis[n+1] = {false};
    int c=0;
    for (int i = 2; i * i <= n; ++i) {
        if(vis[i] == false){
			for(int j = i*i; j<=n; j+=i){
				vis[j] = true;
			}
		}
    }
	for(int i=2; i<=n; i++){
		if(vis[i] == false) c++;
	}
	cout<<c;
}


int main() {
	int n; cin>>n;
	factorize(n);
	return 0;


}
