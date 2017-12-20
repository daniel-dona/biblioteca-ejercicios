/*

Enunciado: aproximar la función sen(x) sin emplear funciones de la librería matemática (math.h) y empleando la serie de Taylor. Aproximar hasta una diezmilésima.

Lenguaje: C++

*/

#include <iostream>
#define PI 3.14159

using namespace std;

double factorial(int x){
    
    double resultado = 1;
    
    if(x > 0){
    
        for(int i = 2; i <= x; i++){
            
            resultado = resultado * i;
            
        }
        
    }
    
    return resultado;
    
}


double potencia(double x, int e){

    double resultado = 1;

    if(e > 0){
    
        for(int i = 1; i <= e; i++){
        
            resultado = resultado * x;
            
        }
        
    }
    
    return resultado;

}

double absoluto(double x){
    
    double resultado;
    
    if(x < 0){
        
        resultado = x * -1;
        
    }else{
        
        resultado = x;
        
    }
    
    return resultado;
    
}

double seno(double x){

    double termino, semisuma;
    
    for(int i = 0; (absoluto(termino) > 0.0001 || i == 0); i++){
        
        termino = (double) potencia(-1.0, i) * (potencia(x, (2*i)+1) / factorial((2*i)+1));
        
        //cout << "i = " << i << " | term = " << termino << endl;
        
        semisuma = semisuma + termino;
        
    }
    
    return semisuma;
    
}


double leer_double(){
    
    double tmp;
    
    do{
        
        cout << "Escriba un ángulo en radianes: ";
        
        cin >> tmp;
        
    }while(tmp < 1);
    
    return tmp;
    
}


int main(){
    
    double x = leer_double();
    
    cout << "sen(x) = " << seno(x) << endl;
    
}
