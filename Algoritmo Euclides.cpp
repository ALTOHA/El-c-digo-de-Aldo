#include <bits/stdc++.h>

using namespace std;

int mcd(int a, int b){
	if(b == 0)
		return a;
		
	return mcd(b, a%b);	
}

int main(){
	
	printf("%d\n", mcd(105, 70));
	
	return 0;
}
