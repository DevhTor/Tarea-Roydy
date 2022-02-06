//EXPLIQUE EL FUNCIONAMIENTO DEL LOS SIGUIENTES CODIGO

/*
Se declara dos varibles una llama i la cual servira como iterador en el bucle while
y la varible suma, la cual servira de contenedor para las operaciones dentro del bucle.

Dentre del bucle while tenemos a la varible i antes declarada la cual mientras sea menor
o igual a 100 se sumara la variable suma con el iterador i y se almacenara en la propia
varible suma y luego el iterador i aumenta su valor en 1.
*/


int i=1,suma=0;

while (i<=100){

    suma=suma+i;
    i++;
}

/* Bucle que espera hasta que se pulse la tecla Esc */

while (getc(stdin)!=‘\x1B’); 

/*
Este es un buble infinito puesto que uno corresponde a verdad, y dentro del bucle tenemos
que la varible d que debio haberse declarado antes captura la tecla introducida por el usuario
y luego imprime el string de esta tecla y luego en la condicional del if se evalua si la tecla
introducida es igual a la tecla de escape en este caso se ejecuta el brake saliendo del bucle 
de lo contrario continuara en el bucle infinitamente.
*/
while (1) {

    d=getc(stdin);

    printf(“%c”,d);

    if (d==‘\x1B’) break;

}

//----------------------------------------
/*
Se Declara la variable num y leugo dentro de un bucle do-while el usuario introduce un valor
y si este numero es mayor a 100 volvera a pedir dicho numero en caso de que sea menor o igual 
a 100 continuara con el flujo del programa.

Luego de esto se declara dos varibles i y j y se le pide al usuario que ingrese estos valores
y siempre que el valor introducido en la variable i sea menor a el valor de la variable j 
seguira pidiendo los valores de i y j, en caso contrario saldra del bucle.

*/
int num;

do 
    scanf(“%d”, &num);

while (num>100);

    int i , j;

do{

    scanf(“%d”,&i);
    scanf(“%d”,&j);

}

while (i<j);


//------------------------------
/*
Se declara la varible x para ser usada en el for, dentro del for le asignamos el valor 0 a la
varible x y mientras que x sea menor a 10 se ejecutara dicho bucle y al final de cada vuelta 
del bucle se incrementara en 1 el valor de la variable.

Si el usuario presiona la tecla escape se interrumpe el bucle de lo contrario este bucle 
seguira infinitamente imprimiendo el texto “Salí del bucle infinito, el valor de x es: %d\n”,x.

Al final tenemos la declaracion de la variable x y un bucle for donde este comenzara en 1
hasta que x sea menor o igual a 100. en cada vuelta se evalua si al dividir el valor de x
en ese momento dividido a 2 su residuo es cero si es asi se imprime el valor de x de lo contrario
continua en la siguente vuelta.


*/
int x;

for(x=0;x<10;x++){

    
    if (getc(stdin)==‘\x1B’) break;

    printf(“Salí del bucle infinito, el valor de x es: %d\n”,x);

}

int x;

/* Esta rutina imprime en pantalla los números pares*/
for(x=1;x<=100;x++) {

    if (x%2) continue;

    printf(“%d\n”,x);

}