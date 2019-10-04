# include <stdlib.h>
# include <conio.h>
int  main () {
int opt;
char rep;
float a;
float b, c;
do {
printf ( " 1.-Suma\n " );
printf ( " 2.- Resta\n " );
printf ( " 3.- Multiplicar\n " );
printf ( " 4.- Division \n " );
printf ( " Introducir la opcion \n  " );

scanf ( " %d " ,&opt);

printf ( " Introducir la primera cantidad: \n " );
scanf ( " %f " ,&a);
printf ( " Introducir la 2 cantidad: \n " );
scanf ( " %f " ,&b);
switch(opt){
case 1:
    c=a+b;
    printf ( " El resultado es: %d " , c);
 break;
case 2:
    c=a-b;
printf ( " El resultado es: %d " , c);
break;
case 3:
    c=a*b;
    printf ( " El resultado es: %d " , c);
    break;
case 4:
    while ( b==0){
            printf("El segundo operando debe de ser distinto a cero\n intente de nuevo \n");
printf ( " Introducir la 2 cantidad: \n " );
scanf ( " %f " ,&b);


    }
    printf( " El resultado es: %d " , c);
    c=a/b;
    break;
default: printf ("opcion invalida");
}
printf ("¿desea hacer otra operacion? S N \n");
rep = getch ();

}
while((rep=='S') || (rep == 's'));

return 0 ;
}
