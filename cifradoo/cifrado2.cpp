#include<iostream>
#include<string.h>
#include<string>
using namespace std;


int main(){
    char abc[]="abcdefghijklmnopqrstuvwxyz";
    
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

    string word;
    char aux[longitud];
    cout<<"\n";
    cout<<"--------------------------"<<endl;
    cout<<"diga la palabra clave : ";cin>>word;
    cout<<"\n";
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

    //recorrido
    int n;
    cout<<"diga el recorrido : ";cin>>n;
    cout<<"\n";
    cout<<"la palabra cifrada es : ";

    //cifrado
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
        if((numer-n)<=0){
            cout<<abc[numer-n+26-1];
            aux1[i]=numer-n+26;
        }
        else{
            cout<<abc[numer-n-1];
            aux1[i]=numer-n;
        }
          
                                                
	}
    cout<<"\n";
    cout<<"----------------"<<endl;
    for(int i=0;i<longitud;i++){
        cout<<aux1[i]<<" ";
    }


    return 0;
}