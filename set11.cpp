#include <bits/stdc++.h>
using namespace std;

set<int> a, b;
set<int>::iterator ai;

int main() {
	int n, t;
	cin>>n;

	for(int i=0; i<n; i++) {
		cin>>t;
		ai = a.find(t);
		if( ai != a.end() )
			b.insert(t);
		else 
			a.insert(t);
	}

	for(ai = b.begin(); ai!=b.end(); ai++) {
		cout<<(*ai)<<" ";
	}


}