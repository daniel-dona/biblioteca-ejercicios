/*

Enunciado: dado un número entero positivo menor que 20, hacer una pirámide tal que si x= 3

1 2 3 3 2 1
2 3     3 2
3         3

Lenguaje: C++

*/

#include <iostream>

using namespace std;


int leer_entero(){
    
    int tmp;
    
    do{
        
        cout << "Escriba un número entero positivo menor de 20: ";
        
        cin >> tmp;
        
    }while(tmp < 1 || tmp > 20);
    
    return tmp;
    
}

void imprimir_numero(int n){
    
    if(n < 10){
        
        cout << "  " << n;
        
    }else{
        
        cout << " " << n;
        
    }
    
}

void triangulo(int n){

    int ancho = n * 2;
    
    int alto = n;
    
    int num;
    
    for(int i = 0; i <= alto; i++){
        
        num = i;
    
        for(int j = 1; j < (ancho+2); j++){
            
            if(j < (n+2)){
                
                num++;
                
            }else{
                
                num--;
                
            }
            
            if(num <= n){
            
                imprimir_numero(num);
                
            }else{
                
                if(j != (n+1)){
                
                    cout << "   ";
                    
                }
                
            }
        
        }
        
        cout << endl;
        
    }


}


int main(){
    
    int n = leer_entero();
    
    triangulo(n);
    
}
