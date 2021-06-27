#include <bits/stdc++.h>

using namespace std;

int main(){
	int i;
	char palabra[10];
	
	scanf("%s", palabra);
	
	for(i=0; i<strlen(palabra); i++){
		printf("%c\n", tolower(palabra[i]));
	}
	
	//printf("%s\n", palabra);
	
	return 0;
}
