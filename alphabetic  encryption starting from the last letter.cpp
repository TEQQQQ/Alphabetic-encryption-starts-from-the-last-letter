#include<iostream>
#include<string.h>

using namespace std;

int main () {
	
	char alfabe[] ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char metin[100];
	int x;
	int y;
	int z;
	cout<<"METIN GIRINIZ:";
	cin>>metin;
	
	
	
	for(int i = 0;i<strlen(metin);i++){
		
		
		y = (155-(metin[i]))-65; 
		cout<<alfabe[y];
			
	}
	
	return 0;
}
