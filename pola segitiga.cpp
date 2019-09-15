#include <iostream>
using namespace std;

long double pascal(int n){
	int z,i;
		
	for(z=1,i=1;i<=n;i++) {
    z=z*i;
    
  }
  return z;
}

int main(){
	int i,j,N;
		
	cout << "Masukkan tinggi segitiga";
	cin >> N;
	
	for(i=0;i<N;i++){
		for(j=0;j<(N-i-1);j++)
		cout << " "; 
		for(j=0;j<=i;j++)
		cout << pascal(i)/(pascal(j)*pascal(i-j)) << " ";
				
	cout << endl;
}
return 0;
}
