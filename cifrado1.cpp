#include<iostream>
#include<string.h>
#include<string>
using namespace std;

int main(){
    char abc[]="abcdefghijklmnopqrstuvwxyz";
    char clave[26];
    string palabra;
    
    cout<<"diga la palabra a sifrar :";cin>>palabra; //E	U	C	A	L	I	P	T	O	B	D	F	G	H	J	K	M	N	Q	R	S	V	W	X	Y	Z

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
    cout<<"la palabra cifrada es : ";
	for(int i=0;i<longitud;i++) {
		int num = cifra[i];
		cout <<clave[num-1]<<" ";//E	 U	C	A	L	I	P	T	O	B	D	F	G	H	J	K	M	N	Q	R	S	V	W	X	Y	Z
        aux[i]=clave[num-1];
	}
    
    // para decifrar la clave 
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
    cout<<"la clave decifrada es : ";
    for(int i=0;i<longitud;i++) {
		int numer = decifrado[i];
		cout <<abc[numer-1]<<" ";     //E	 U	C	A	L	I	P	T	O	B	D	F	G	H	J	K	M	N	Q	R	S	V	W	X	Y	Z
	}


    return 0;
}
