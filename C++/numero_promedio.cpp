/*

Enunciado: Definimos número promedio de un número entero positivo, al número que se obtine de sumar sus dígitos impares y restar sus dígitos pares. Escribe un prorama que pida una serie de números e indique los números promedios de cada número, el programa se ejecutará hasta que el usuario desee.

Lenguaje: C++

*/

#include <iostream>

using namespace std;

int leer_entero(){
    
    int tmp;
    
    do{
        
        cout << "Escriba un número entero positivo: ";
        
        cin >> tmp;
        
    }while(tmp < 1);
    
    return tmp;
    
}

bool preguntar_continuar(){
    
    char respuesta;
        
    cout << endl << endl << "¿Continuar? (S/N):";
        
    cin >> respuesta;
    
    if(respuesta == 'S' || respuesta == 's'){
        
        return true;
        
    }else{
        
        return false;
        
    }
    
}
        
    


int main(){
    
    int n, i, resultado;
    
    while(true){
        
        n = leer_entero();
        
        i = 0;
        
        resultado = 0;

        do {
            
            // Al hacer el módulo entre la base del sistema de numeración usado obtenemos la última cifra de un entero
            
            int digito = n % 10; 
            
            n = n / 10;
            
            if(i % 2 == 0){
                
                resultado = resultado + digito;
                
            }else{
                
                resultado = resultado - digito;
                
            }
            
            i++;
            
        } while (n > 0);
        
        cout << "Número promedio: " << resultado;
        
        
        if(!preguntar_continuar()){
            
            break;
            
        }
        
    }

}
