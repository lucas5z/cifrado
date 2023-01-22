#include<iostream>
#include<string.h>
#include<string>

using namespace std;

int main(){
    char abc[]="abcdefghijklmnopqrstuvwxyz";
    string palabra;
   
    

    cout<<"diga la palabra:";cin>>palabra;

    int longitud= palabra.length();
    char aux[26-longitud];
    for(int i=0;i<longitud;i++){
        for(int j=0;j<26;j++){
            if( abc[j]!= palabra[i]){
                cout<<abc[j];
            }
            else{
                aux[j]=abc[j];
            }
        }
    }
    cout<<"\n";
    cout<<"-----------------"<<endl;
    for(int j=0;j<26;j++){
        cout<<aux[j];
    }
    return 0;

}