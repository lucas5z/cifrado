#include<iostream>
#include<string.h>
#include<string>
using namespace std;

int main(){
    char abc[]="abcdefghijklmnopqrstuvwxyz";
    
    string palabra;
    
    cout<<"diga la palabra a cifrar :";cin>>palabra;

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
    //palabra clave
    string word;
    char aux[longitud];
    cout<<"\n";
    cout<<"--------------------------"<<endl;
    cout<<"diga la palabra clave : ";cin>>word;
    int longitud1=word.length();
    char aux12[26-longitud1];
    char clave[26];
    int j=0;

    for(int i=0;i<26;i++){
        bool used = false;
        for (int j = 0; j < longitud1; j++) {
            if(word[j] == abc[i]) {
                used = true;
                break;
            }
        }
         if (!used){
            /* cout << abc[i]; */
            aux12[j]=abc[i];
            j++;
        }
        
    }
    cout<<"\n";
    cout<<" ----------------"<<endl;
    
    for(int i=0;i<longitud1;i++){
        clave[i]=word[i];
    }
    for(int i=longitud1;i<26;i++){
        clave[i]=aux12[i-longitud1];
        
    }
    /* for(int i=0;i<26;i++){ 
        
        cout<<clave[i]<<" = "<<i+1<<endl;
        
    } */

    //para cifrado

    cout<<"\n";
    cout<<"la palabra cifrada es : ";
	for(int i=0;i<longitud;i++) {
		int num = cifra[i];
		cout <<clave[num-1]<<" ";
        aux[i]=clave[num-1];
	}
    
    // para decifrar 
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
    cout<<"----------------"<<endl;
    
    return 0;
}