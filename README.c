#include <stdio.h>
float promedioAcd(int numeroUnidades);
float promedioApe(int numeroUnidades);
float promedioAa(int numeroUnidades);
float promedioEs(int numeroUnidades);
float calcularPromedioUnidad(int numeroUnidades);
int main (){
//Declaración de variables
    const int UNIDAD=3;
    int unidad1 = 1;
    float sumaFinal=0;
    for (unidad1; unidad1<= UNIDAD; unidad1++){
        float notaUnidad=calcularPromedioUnidad(unidad1);
        sumaFinal=sumaFinal+notaUnidad;
    }
    float notaFinalAnio= sumaFinal/UNIDAD;
    printf("La nota final del anio es: %.2f \n", notaFinalAnio);
    if(notaFinalAnio>=7){
        printf("Aprobado");
    }else if(notaFinalAnio>=2.5 && notaFinalAnio<7){
        printf("Supletorio");
    }else{
    printf("Reprobado");
    }
    return 0;
}
// Promedio Total
float calcularPromedioUnidad(int numeroUnidades){
    //Promedio ponderado ACD
    float promedioResultadoAcd;
    promedioResultadoAcd= promedioAcd(numeroUnidades);
    printf("El promedio ponderado de la unidad %i, es %.2f \n", numeroUnidades, promedioResultadoAcd);
    //Promedio ponderado APE
    float promedioResultadoApe;
    promedioResultadoApe= promedioApe(numeroUnidades);
    printf("El promedio ponderado de la unidad %i, es %.2f \n", numeroUnidades, promedioResultadoApe);
    //Promedio ponderado AA
    float promedioResultadoAa;
    promedioResultadoAa= promedioAa(numeroUnidades);
    printf("El promedio ponderado de la unidad %i, es %.2f \n", numeroUnidades, promedioResultadoAa);
    //Promedio ponderado ES
    float promedioResultadoEs;
    promedioResultadoEs= promedioEs(numeroUnidades);
    printf("El promedio ponderado de la unidad %i, es %.2f \n", numeroUnidades, promedioResultadoEs);
    //Calculo de la nota final por unidad
    float notaTotalUnidad= promedioResultadoAcd + promedioResultadoApe + promedioResultadoAa + promedioResultadoEs;
    printf("La nota total para la Unidad %i es : %.2f\n", numeroUnidades,notaTotalUnidad);
    return notaTotalUnidad;
}
// Calculo del promedio ACD
float promedioAcd(int numeroUnidades){
    int numeroActividades;
    float nota;
    float sumaNotas=0;
    printf("\n CALCULO DE NOTAS DEL ACD \n");
    do {
        printf("Ingrese el numero de Actividades trabajadas durante la unidad %i\n ",numeroUnidades);
        scanf("%i", &numeroActividades);
    }while(numeroActividades<=0);

    for (int i=0; i<numeroActividades; i++){
        do{
            printf("Ingrese la nota de la Actividad de la unidad %i\n", numeroUnidades);
            scanf("%f", &nota);
        }while(nota<0 || nota>10);
        sumaNotas=sumaNotas+nota;
    }
    //Promedio Simple
    float resultado= sumaNotas/numeroActividades;
    printf("La nota del promedio de la Unidad %i es: %.2f \n",numeroUnidades ,resultado);
    //Ponderado
    float resultadoPonderadoAcd=(resultado)*0.20;
    return resultadoPonderadoAcd;
}
// Calculo promedio APE
float promedioApe(int numeroUnidades){
    int numeroActividades;
    float nota;
    float sumaNotas=0;
    printf("\nCALCULO DE NOTAS DEL APE \n");
    do {
        printf("Ingrese el numero de Actividades de la unidad %i\n ",numeroUnidades);
        scanf("%i", &numeroActividades);
    }while(numeroActividades<=0);

    for (int i=0; i<numeroActividades; i++){
        do{
            printf("Ingrese la nota de la Actividad de la unidad %i\n", numeroUnidades);
            scanf("%f", &nota);
        }while(nota<0 || nota>10);
        sumaNotas=sumaNotas+nota;
    }
    //Promedio Simple
    float resultado= sumaNotas/numeroActividades;
    printf("La nota del promedio de la Unidad %i es: %.2f \n",numeroUnidades ,resultado);
    //Ponderado
    float resultadoPonderadoApe=(resultado)*0.25;
    return resultadoPonderadoApe;
}
//Calculo promedio AA
float promedioAa(int numeroUnidades){
    int numeroActividades;
    float nota;
    float sumaNotas=0;
    printf("\n CALCULO DE NOTAS DEL AA \n");
    do {
        printf("Ingrese el numero de Actividades de la unidad %i\n ",numeroUnidades);
        scanf("%i", &numeroActividades);
    }while(numeroActividades<=0);

    for (int i=0; i<numeroActividades; i++){
        do{
            printf("Ingrese la nota de la Actividad de la unidad %i\n", numeroUnidades);
            scanf("%f", &nota);
        }while(nota<0 || nota>10);
        sumaNotas=sumaNotas+nota;
    }
    //Promedio Simple
    float resultado= sumaNotas/numeroActividades;
    printf("La nota del promedio de la Unidad %i es: %.2f \n",numeroUnidades ,resultado);
    //Ponderado
    float resultadoPonderadoAa=(resultado)*0.20;
    return resultadoPonderadoAa;
}
// Calculo de la nota de la evaluacion sumativa
float promedioEs(int numeroUnidades){
    float evaluacion, porE;
    float portafolio, porP;
    printf("\nCALCULO DE LA ES\n");
    do {
        printf("Ingrese la nota de la evaluacion sumativa de la unidad %i\n ",numeroUnidades);
        scanf("%f", &evaluacion);
    }while(evaluacion<0  || evaluacion>10);
    do {
        printf("Ingrese la nota del portafolio de la unidad %i\n ",numeroUnidades);
        scanf("%f", &portafolio);
    }while(portafolio<0 || portafolio>10);
    do {
        printf("Ingrese el porcentaje para la Evaluacion:\n");
        scanf("%f", &porE);
        printf("Ingrese el porcentaje para el Portafolio: \n");
        scanf("%f", &porP);
    }while((porE+porP)!=100);
    //Promedio Simple
    float resultado=(evaluacion*(porE/100))+(portafolio*(porP/100));
    printf("El promedio de la Evaluacion Sumativa en la Unidad %i es:%.2f \n", numeroUnidades, resultado);
    //Ponderado
    float resultadoPonderadoEs=resultado*0.35;
    return resultadoPonderadoEs;
}
