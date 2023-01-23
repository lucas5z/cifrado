#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int main(){
    char abc[]="abcdefghijklmnopqrstuvwxyz";
    int n;
    string palabra;

    cout<<"diga la palabra cifrada :";cin>>palabra;
    cout<<"diga el recorrido : ";cin>>n;

    int longitud= palabra.length();
    

    //palabra clave
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
    for(int i=0;i<longitud1;i++){
        clave[i]=word[i];
    }
    for(int i=longitud1;i<26;i++){
        clave[i]=aux12[i-longitud1];
    }
    // decifrar
    cout<<"\n";
    cout<<"--------------------------"<<endl;
    int decifrado[longitud];
    for(int i=0;i<longitud;i++){
        for(int j=0;j<26;j++){
            if(palabra[i]==clave[j]){
                cout<<clave[j]<<" => "<<j+1<<endl;

                decifrado[i]=j+1;

            }
        }
        
    }
    char auxx[longitud];
    int aux1[longitud];
    cout<<"la clave decifrada es : ";
    for(int i=0;i<longitud;i++) {
		int numer = decifrado[i];
        if((numer-n)<=0){
            cout<<abc[numer-n+26-1];
            aux1[i]=numer-n+26+1;
            auxx[i]=abc[numer-n+26-1];
        }
        else{
            cout<<abc[numer-n-1];
            aux1[i]=numer-n+1;
            auxx[i]=abc[numer-n-1];
        }
          
	}
    
    cout<<"\n";
    cout<<"----------------"<<endl;
    //cifrado
    int cifra[longitud];
    
    for(int i=0;i<longitud;i++){
        for(int j=0;j<26;j++){
            if(auxx[i]==abc[j]){
                cout<<abc[j]<<" => "<<j+1<<endl;

                cifra[i]=j+1;

            }
        }   
    }
    cout<<"\n";
    cout<<"la clave cifrada es : ";
    for(int i=0;i<longitud;i++) {
		int num = cifra[i];
        if((num+n)>25){
            cout<<clave[num+n-26-1];
            //aux[i]=clave[num+n-26-1];
        }
        else{
            cout<<clave[num+n-1];
            //aux[i]=clave[num+n-1];
        }
        
	}

    return 0;
}

