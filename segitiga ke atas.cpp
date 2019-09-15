//segitiga ke atas
#include <iostream>
using namespace std;

int main(){
	int i,j,k,N;
	
	cout << "Masukkan tinggi segitiga";
	cin >> N;
	
	for(i=1;i<=N;i++){
		for(j=0;j<(N-i);j++)
		cout << " ";
		for (j=1;j<=i;j++)
		cout << "* ";
			
	cout << endl;	
	}
	return 0;	  
}
