// Estructuras de datos grupo #3
// Elaborado por Kenneth Rojas y
// Ultima modificación 12/08/2022
// Caso #1
#include <iostream>
using namespace std;

#define ROJO 1
#define VERDE 2
#define AMARILLO 3
#define AZUL 4

//Se encarga de verificar que los colores de las regiones adyacentes no sean del mismo color
bool checkRegions(int matriz[6][5], int indexF, int indexC){
    int color = matriz[indexF][indexC];
    if (color != matriz[indexF][indexC+1] && color != matriz[indexF][indexC-1]){
        if (color != matriz[indexF+1][indexC] && color != matriz[indexF-1][indexC]){
            return true;

        }else{
            return false;
        }
    }else{
        return false;
    }
}

int main(){
    int mapFourColor[6][5] = {{ROJO,      VERDE,    AMARILLO, AZUL,     ROJO},  
                              {AMARILLO,  AZUL,     ROJO,     VERDE,    AMARILLO},
                              {ROJO,      VERDE,    AMARILLO, AZUL,     ROJO},
                              {AMARILLO,  AZUL,     ROJO,     VERDE,    AMARILLO},
                              {AZUL,      AMARILLO, VERDE,    ROJO,     AZUL},
                              {VERDE,     ROJO,     AZUL,     AMARILLO, VERDE}};//Si se quiere verificar el funcionaminto del código
                                                                                //puede alterar cualquier color de modo que sea falso

    int filas = (sizeof(mapFourColor)/sizeof(mapFourColor[0]));
    int columnas = (sizeof(mapFourColor[0])/sizeof(mapFourColor[0][0]));
    for (int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            if (mapFourColor[i][j] == ROJO || mapFourColor[i][j] == VERDE || mapFourColor[i][j] == AMARILLO || mapFourColor[i][j] == AZUL){
                bool valor = checkRegions(mapFourColor, i, j);
                if (valor == true){
                    continue;
                }else{
                    cout << "Mapa estructurado de manera incorrecta" << endl;
                    return 0;
                }
                
            }else{
                cout <<"Codigo de color no encontrado" << endl;
                return 0;
            }
        }
    }cout << "Mapa de 4 colores correctamente estructurado" << endl;
    return 0;
}
    