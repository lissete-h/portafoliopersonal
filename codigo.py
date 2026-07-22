def completarMatriz(matriz, nombre):
    print(f"Matriz {nombre}")
    for l in range(2):
        for j in range(3):
            val = int(input(f"Igrese el valor para la Matriz {nombre} [{l}] [{j}] :\n"))
            matriz[l][j] = val

def sumaMatriz(m1, m2, res):
    for l in range(2):
        for j in range(3):
            res[l][j] = m1[l][j] + m2[l][j]

def restaMatriz(m1, m2, res):
    for l in range(2):
        for j in range(3):
            res[l][j] = m1[l][j] - m2[l][j]

def multiplicacionMatriz(m1, m2, res):
    for l in range(2):
        for j in range(3):
            res[l][j] = m1[l][j] * m2[l][j]

def mostrarResultado(mensaje, matriz):
    print(f"\n {mensaje} \n")
    for l in range(2):
        for j in range(3):
            print(f"[{matriz[l][j]}] ", end="")
        print()

def main():
    matrizA = [[0] * 3 for _ in range(2)]
    matrizB = [[0] * 3 for _ in range(2)]
    resSuma = [[0] * 3 for _ in range(2)]
    resResta = [[0] * 3 for _ in range(2)]
    resMultiplicacion = [[0] * 3 for _ in range(2)]

    completarMatriz(matrizA, 'A')
    completarMatriz(matrizB, 'B')

    sumaMatriz(matrizA, matrizB, resSuma)
    restaMatriz(matrizA, matrizB, resResta)
    multiplicacionMatriz(matrizA, matrizB, resMultiplicacion)

    mostrarResultado("Matriz A", matrizA)
    mostrarResultado("Matriz B", matrizB)
    mostrarResultado("Resultado de la Suma (A + B)", resSuma)
    mostrarResultado("Resultado de la Resta(A - B)", resResta)
    mostrarResultado("Resultado de la Multiplicacion(A * B)", resMultiplicacion)

if __name__ == "__main__":
    main()
