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

void triangulo(int n){

    int ancho = n * 2;
    
    int alto = n;
    
    for(int i = 0; i < alto; i++){
    
        for(int j = 0; j < ancho; j++){
        
        


}
