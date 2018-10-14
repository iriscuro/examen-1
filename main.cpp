#include <iostream>
#include<math.h>
using namespace std;

int tamChar(char *arr){
    char  *aux = arr;
    while(*arr !='\0')
        arr++;
    return arr-aux;
}
int pot(int a,int b){
    int resp=1;
    for(int i=0;i<b;i++){
        resp=resp*a;
    }
    return resp;
}

float potF(float a,int b){
    float resp=1.0;
    for(int i=1;i<=b;i++){
        resp=resp*a;
    }
    return resp;
}
int convCN(char a){
    int n=0;
    n=a-'0';
    return n;
}
int convCharI(char *arr,int ta){
    int num=0,aux=1,m=0,l=ta-1;;
    for(int i=0;i<ta;i++){
        m= convCN(arr[l]);
        aux=m*(pot(10,i));
        num=num+aux;
        l--;
    }
    return num;
}
int convSI(char *arr){
    int m=0,aux=1,num=0;
    int l=tamChar(arr)-1;
    while(*arr!='\0'){
        m=convCN(*arr);
        aux=m*pot(10,l);
        num+=aux;
        arr++;
        l--;
    }
    return num;
}
int main()
{
    /*
    int x=0;
    while(true){
        if(x++>=10){
            //cout<<" "<<x;
            break;}
        if(x%2)
            continue;
        cout << "\ x is \ " << ++x<<"\n";
    }*/
    //-------------------<<<<<<<*>>>>>>>-----------------------
    /*
    char l='9';
    int n=l-'0';
    cout << n<<endl;
    //-------------------<<<<<<<*>>>>>>>-----------------------
    int m=0,num=0,aux=0;
    int lar=6;
    char musa[]="1276689";
    for(int i=0; i<7; i++){
        //m=static_cast<int>(musa[i]);
        m=musa[lar]-'0';
        //cout<<m<<" ";
        aux=m*(pot(10,i));
        num=num+aux;
        lar--;}

    cout<<num<<endl;
    */
    //--------------------------------------------------------------------------
    /*
    int m=0,num=0,aux=0;
    float d=1.0;
    int lar=7;
    char musa[]="127.6683";// musa[]={'1','2','7','.','6','6','8','9','\0'}
    for(int i=0; i<7; i++){
        //m=static_cast<int>(musa[i]);
        if(musa[i]=='.'){
            //d=pow(0.1,lar);
            d=potF(0.1,lar);
            //cout<< d<<endl;
            //cout<<" "<<musa[lar]<<" ";
            m=musa[lar]-'0';
            //cout<<"->"<<m<<" ";
            aux=m*(pot(10,i));
            //cout<<"->"<<aux <<" ";
            num=num+aux;
            lar-=2;
            }
        else{
        m=musa[lar]-'0';
        //cout<<m<<" ";
        aux=m*(pot(10,i));
        num=num+aux;
        lar--;}
    }
    cout<<(num*d)<<endl;
    */

    char chels[]="7564";
    int t=0;
    t=tamChar(chels);
    cout<< " El tamaño es -> "<<t<<endl;
    cout << convCharI(chels,4)<< endl;
    cout << " -> "<< convSI(chels)<<endl;

    return 0;
}
