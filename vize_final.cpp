#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int v,f;
	float ort;
	
	cout<<"vize notunuzu giriniz:  ";
	cin>>v;
	
	cout<<"final notunuzu giriniz: ";
	cin>>f;
	
	ort=(v*0.4)+(f*0.6);
	
	cout<<"ders ortalaman: "<<ort;
	
	if(ort>50){
  
		cout<<"\ntebrikler bu dersi geçtiniz :)";
	}
	
	else
	{
		cout<<"\nbu dersten kaldın :( seneye tekrar almalısın ";
	}
	
	return 0;
}


