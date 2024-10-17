#include <stdio.h>


// TODO: (22) Declara un prototipo de una función
//  id: suma
//  @return varible de tipo int
//  @param una matriz
//  @param el número de filas

int suma (int a[][]3, int f); //se puede omitir el primer valor de los corchetes pero no el segundo

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int res= suma(arr, 3); 
    int *ptr = &res;   
   
        printf("%d\t", *(ptr)); 
        return 0;
    }

    int suma (int a[][3], int f){
        int r=0;
        for (int i=0; i<f; i++){
            for(int j =0; j<3; j++){
                r+=a[i][j];
            }
        }
        return 0;
    }

    


//TODO: (25) Crea la función suma que realiza la suma de todos los elementos de un arreglo
