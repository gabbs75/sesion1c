//Programa 1 datos de bienvenida con variables entrada y salida

#include <stdio.h>
int main()
{//inicia funcion princial
	//declaracion de variables: una variebel es un valor asisgnado en memoria "="
	int numero1=100; //variables inicialidada lleva valor y entero int %
	float saldo=10.2;// variebles iniciazlizada lleva valor de tipo decimal float %f
	char letras= 'A'; //variables inicializada lleva valor de tipo caracter char %c %s
	char nombre [20]= "Gabriela"; //Arreglo inicializado lleva a valores de tipo sting %s
	
	//Imprimir datos de bienvenida
	printf("varibles tipo entero: %i",numero1);
	printf("Variables tipo decimal: %f",saldo);
	printf("Varibles tipo un caracter: %c",letras);
	printf("varibles tipo sting: %s", nombre);    
	
	
	
}//Termina funcion principal 
