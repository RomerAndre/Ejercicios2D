#include<stdio.h>

void proc(float a,float b){

	scanf("%f",&a);

	b - a * 1000;

	cout<<"\n La distancia ingresada en metros es: "<<b<<"\n";


	}	

int main (){

float a,b;
cout<<"Ingrese una distancia en kilometros:"<< "\n";
proc(a,b);

return 0;
}
