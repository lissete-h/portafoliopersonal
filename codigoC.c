#include<stdio.h>
void completarMatriz( int matriz[2][3], char nombre);
void sumaMatriz(int m1[2][3], int m2[2][3], int res[2][3]);
void restaMatriz(int m1[2][3], int m2[2][3], int res[2][3]);
void multiplicacionMatriz(int m1[2][3], int m2[2][3], int res[2][3]);
void mostrarResultado(char mensaje[], int matriz[2][3]);

int main(){
    
    int matrizA[2][3];
    int matrizB[2][3];
    int resSuma[2][3];
    int resResta[2][3];
    int resMultiplicacion[2][3];

    // Completar matriz
    completarMatriz(matrizA,'A' );
    completarMatriz(matrizB,'B');
    // Suma matriz
    sumaMatriz(matrizA, matrizB, resSuma);
    // Resta matriz
    restaMatriz(matrizA,matrizB, resResta);
    // Multiplicacion Matriz
    multiplicacionMatriz(matrizA, matrizB, resMultiplicacion);

    // Resultado de la matriz completa
    mostrarResultado("Matriz A", matrizA);
    mostrarResultado("Matriz B", matrizB);
    // Resultado de la suma de las matrices
    mostrarResultado("Resultado de la Suma (A + B)", resSuma);
    // Resultado de la resta de las matrices
    mostrarResultado("Resultado de la Resta(A - B)",resResta);
    // Resultado de la Multiplicación de las matrices
    mostrarResultado("Resultado de la Multiplicacion(A * B)",resMultiplicacion);

    return 0;
}

// Ingresar los datos para la matriz   
void completarMatriz( int matriz[2][3], char nombre){
    //Datos de entrada
    printf("Matriz %c\n",nombre);
    for(int l =0; l < 2; l ++){
        for(int j = 0; j < 3; j ++){
            printf("Igrese el valor para la Matriz %c [%i] [%i] :\n",nombre, l,j);
            scanf("%i",&matriz [l][j]);
        }
    }

}


// Suma de la matriz
void sumaMatriz(int m1[2][3], int m2[2][3], int res[2][3]){
    for(int l = 0; l < 2; l++){
        for(int j = 0; j < 3; j++){
            
            res[l][j] = m1[l][j] + m2[l][j];
        }
    }
}
// Resta de la matriz
void restaMatriz(int m1[2][3], int m2[2][3], int res[2][3]){
    for(int l = 0; l < 2; l++){
        for(int j = 0; j < 3; j++){
            
            res[l][j] = m1[l][j] - m2[l][j];
        }
    }
}
//Multiplicación de la matriz
void multiplicacionMatriz(int m1[2][3], int m2[2][3], int res[2][3]){
    for(int l = 0; l < 2; l++){
        for(int j = 0; j < 3; j++){
            
            res[l][j] = m1[l][j] * m2[l][j];
        }
    }
}
// Mostrar resultado en pantalla
void mostrarResultado(char mensaje[], int matriz[2][3]){
    printf("\n %s \n", mensaje);
    for(int l = 0; l < 2; l++){
        for(int j = 0; j < 3; j++){
            printf("[%i] ", matriz[l][j]);
        }
        printf("\n");
    }
}
