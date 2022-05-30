#include <iostream>

using namespace std;

int main()
{
int L;
int H;
char flag[100][100];


cout<<"Bienvenidos a Banderes online"<<endl;
cout<<"Ingrese la longitud (L) de la Bandera de Inglaterra (recuerde que debe ser mayor 2 y menor a 20 he impar):";cin>>L;

while(L<=2){
    cout<<"Ingrese la longitud (L) de la Bandera de Inglaterra (recuerde que debe ser mayor 2 y menor a 20 he impar):";cin>>L;

}

while(L%2==0){
    cout<<"Ingrese la longitud (L) de la Bandera de Inglaterra (recuerde que debe ser mayor 2 y menor a 20 he impar):";cin>>L;

    
}
while(L>=2&&L>=20){
    cout<<"Ingrese la longitud (L) de la Bandera de Inglaterra (recuerde que debe ser mayor 2 y menor a 20 he impar):";cin>>L;

    
}

cout<<"Ingrese la altura (H) de la Bandera de Inglaterra (recuerde que debe ser mayor 2 y menor a 20 he impar):";cin>>H;

while(H<=2){
    
    cout<<"Ingrese la altura (H) de la Bandera de Inglaterra (recuerde que debe ser mayor 2 y menor a 20 he impar):";cin>>H;
}

while(H%2==0){
    cout<<"Ingrese la altura (H) el la Bandera de Inglaterra (recuerde que debe ser mayor 2 y menor a 20 he impar):";cin>>H;

}
while(H>=2&&H>=20){
    cout<<"Ingrese la altura (H) el la Bandera de Inglaterra (recuerde que debe ser mayor 2 y menor a 20 he impar):";cin>>H;

    
}





for(int i=0;i<L;i++){
    
    for(int j=0;j<H;j++){
        
        
        
        
        if(((H/2))==j){
            
            flag[j][i]=43;
            
        
        }
        if((((L/2))==i)&&((H/2))==j){
            flag[j][i]=43;

           
            
        }
        
        if(((L/2))==i){
            flag[j][i]=43;

            

            
            
        }
        if((((L/2))!=i)&&((H/2))!=j){
            flag[j][i]=48;

            
            



            
            
            
        }
    }
}

for(int j=0;j<H;j++){
    
    for(int i=0; i<L;i++){
        
        cout<<flag[j][i];
    }
    cout<<"\n";
}


    return 0;
}

