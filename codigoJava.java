import java.util.Scanner;

public class main {
    static Scanner scanner = new Scanner(System.in);
    //Completar Matriz
    public static void completarMatriz(int[][] matriz, char nombre) {
        System.out.println("Matriz " + nombre);
        for(int l = 0; l < 2; l++) {
            for(int j = 0; j < 3; j++) {
                System.out.println("Igrese el valor para la Matriz " + nombre + " [" + l + "] [" + j + "] :");
                matriz[l][j] = scanner.nextInt();
            }
        }
    }
    //Suma
    public static void sumaMatriz(int[][] m1, int[][] m2, int[][] res) {
        for(int l = 0; l < 2; l++) {
            for(int j = 0; j < 3; j++) {
                res[l][j] = m1[l][j] + m2[l][j];
            }
        }
    }
    //Resta
    public static void restaMatriz(int[][] m1, int[][] m2, int[][] res) {
        for(int l = 0; l < 2; l++) {
            for(int j = 0; j < 3; j++) {
                res[l][j] = m1[l][j] - m2[l][j];
            }
        }
    }
    //Multiplicación
    public static void multiplicacionMatriz(int[][] m1, int[][] m2, int[][] res) {
        for(int l = 0; l < 2; l++) {
            for(int j = 0; j < 3; j++) {
                res[l][j] = m1[l][j] * m2[l][j];
            }
        }
    }
    //Resultados
    public static void mostrarResultado(String mensaje, int[][] matriz) {
        System.out.println("\n " + mensaje + " \n");
        for(int l = 0; l < 2; l++) {
            for(int j = 0; j < 3; j++) {
                System.out.print("[" + matriz[l][j] + "] ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int[][] matrizA = new int[2][3];
        int[][] matrizB = new int[2][3];
        int[][] resSuma = new int[2][3];
        int[][] resResta = new int[2][3];
        int[][] resMultiplicacion = new int[2][3];

        //Completar Matriz
        completarMatriz(matrizA, 'A');
        completarMatriz(matrizB, 'B');
        //Suma Matriz
        sumaMatriz(matrizA, matrizB, resSuma);
        //Resta Matriz
        restaMatriz(matrizA, matrizB, resResta);
        //Multiplicación Matriz
        multiplicacionMatriz(matrizA, matrizB, resMultiplicacion);

        //Mostar Matriz Completa
        mostrarResultado("Matriz A", matrizA);
        mostrarResultado("Matriz B", matrizB);
        //Mostar Suma de las matrices
        mostrarResultado("Resultado de la Suma (A + B)", resSuma);
        //Mostar Resta de als matrices
        mostrarResultado("Resultado de la Resta(A - B)", resResta);
        //Mostar Multiplicación de las matrices
        mostrarResultado("Resultado de la Multiplicacion(A * B)", resMultiplicacion);
    }
}
