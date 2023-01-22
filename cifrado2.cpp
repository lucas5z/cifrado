#include<iostream>
#include<string.h>
#include<string>
using namespace std;


int main(){
    char abc[]="abcdefghijklmnopqrstuvwxyz";
    char clave[26];
    string palabra;
    
    cout<<"diga la palabra a sifrar :";cin>>palabra;

    int longitud= palabra.length();

    int cifra[longitud];
    
    for(int i=0;i<longitud;i++){
        for(int j=0;j<26;j++){
            if(palabra[i]==abc[j]){
                cout<<abc[j]<<" => "<<j+1<<endl;

                cifra[i]=j+1;

            }
        }
        
    }
    for(int i=0;i<longitud;i++){
        cout<<cifra[i]<<" ";
    }
    char aux[longitud];
    cout<<"\n";
    cout<<"--------------------------"<<endl;
    cout<<"diga la palabra clave : ";cin>>clave;
    cout<<"\n";
    int n;
    cout<<"diga el recorrido : ";cin>>n;
    cout<<"\n";
    cout<<"la palabra cifrada es : ";
	for(int i=0;i<longitud;i++) {
		int num = cifra[i];
        if((num+n)>25){
            cout<<clave[num+n-26-1];
            aux[i]=clave[num+n-26-1];
        }
        else{
            cout<<clave[num+n-1];
            aux[i]=clave[num+n-1];
        }
          //E	 U	C	A	L	I	P	T	O	B	D	F	G	H	J	K	M	N	Q	R	S	V	W	X	Y	Z
        
	}
    // decifrar
    cout<<"\n";
    cout<<"--------------------------"<<endl;
    int decifrado[longitud];
    for(int i=0;i<longitud;i++){
        for(int j=0;j<26;j++){
            if(aux[i]==clave[j]){
                cout<<clave[j]<<" => "<<j+1<<endl;

                decifrado[i]=j+1;

            }
        }
        
    }
    int aux1[longitud];
    cout<<"la clave decifrada es : ";
    for(int i=0;i<longitud;i++) {
		int numer = decifrado[i];
        if((numer-n)<0){
            cout<<abc[numer-n+26-1];
            aux1[i]=numer-n+26;
        }
        else{
            cout<<abc[numer-n-1];
            aux1[i]=numer-n;
        }
          //E	 U	C	A	L	I	P	T	O	B	D	F	G	H	J	K	M	N	Q	R	S	V	W	X	Y	Z
                                                
	}
    cout<<"\n";
    cout<<"----------------"<<endl;
    for(int i=0;i<longitud;i++){
        cout<<aux1[i]<<" ";
    }


    return 0;
}