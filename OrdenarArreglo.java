/*
Josue Leonardo Arredondo Juarez
Jose Eduardo Orta Luna
Luis Eduardo Naranjo Calderon
Mario Cesar Velez Zamarron
3 - sep - 2021
*/

import java.util.Random;

class Main{

	public static void main(String args[]){
		int arr[]= new int[15];
		llenaArreglo(arr);
		System.out.println("Arreglo incial:");
		imprimeArreglo(arr);
		ordenaArreglo(arr);
		System.out.println("Arreglo ordenado ascendentemente:");
		imprimeArreglo(arr);
	}

	static void llenaArreglo(int arr[]){
		Random rand = new Random();
		
		for(int i = 0; i < arr.length; i++){
			arr[i] = rand.nextInt(11) + 10;
		}
	}

	static void imprimeArreglo(int arr[]){
		for(int i:arr){
			System.out.print("[" + i + "] ");
		}
		System.out.println("");
	}

	static void ordenaArreglo(int arr[]){
		int n = arr.length;
		int min;
		for(int i = 0; i < n - 1; i++){
			min = i;
			for(int j = i + 1; j < n; j++){
				if(arr[j] < arr[min]){
					min = j;
				}
			}
			int temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}
}
