/*
Josue Leonardo Arredondo Juarez
Jose Eduardo Orta Luna
Luis Eduardo Naranjo Calderon
Mario Cesar Velez Zamarron
3 - sep - 2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* generaArreglo(int n);
void ordenaArreglo(int* arr, int n);
void intercambia(int* a, int* b);
void imprimeArreglo(int* arr, int n);

int main(){
	int* arr;
	arr = generaArreglo(15);
	printf("Arreglo inicial:\n");
	imprimeArreglo(arr,15);
	ordenaArreglo(arr,15);
	printf("Arreglo ordenado descendentemente:\n");
	imprimeArreglo(arr,15);
}

int* generaArreglo(int n){
	int* arr;
	int i;
	arr = (int*)malloc(n*sizeof(int));
	
	srand(time(0));
	for(i = 0; i < n; i++ ){
		arr[i] = rand() % 11;
	}	

	return(arr);
}

void ordenaArreglo(int* arr, int n){
	int i,j,max;

	for(i = 0; i < n - 1; i++){
		max = i;
		for(j = i + 1; j < n; j++){
			if(arr[j] > arr[max]){
				max = j;
			}
		}
		intercambia(&arr[i], &arr[max]);
	}
}

void imprimeArreglo(int* arr, int n){
	int i;
	
	for(i = 0; i < n; i++){
		printf("[%d] ",arr[i]);
	}
	putchar('\n');
}

void intercambia(int* a, int* b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
