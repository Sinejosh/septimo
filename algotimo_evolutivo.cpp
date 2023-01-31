//Programa creado por Joshua SInue Ramirez Aguilar
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

using namespace std;

void poblacion();//Funciones
int v[50],s[50],c[100],g[50],i,j,FB=0,FR=0,FA=0,r=0;

int main()
{
	poblacion();
	system("\n pause");
	return 0;
}

void poblacion()
{
	srand(time(0));//semilla para la creacion aleartoria
	for(i=0;i<100;i++)//generamos 100 individuos aleatoriamente
	{
		c[i]=rand()%2;//vector con rango de 2
		//como los numeros o y 1 tenemos 00 01 10 11
	}
	
	for(i=0,r=50;i<50,r<100;i++,r++)//unimos los vectores al nuevo vector
	{
		v[i]=c[i];
		s[i]=c[r];
	}
	
	for(i=0;i<50;i++)//generamos los pares
	{
	 	g[i]=s[i]+v[i];
	}
	
	for(i=0;i<50;i++)//para flores blancas
	{
		if(g[i]==0)
		{
			FB++;
		}
		
		else if(g[i]==1)//si es 01 tambien son flores blancas
		{
			FB++;	
		}
		
		else if(g[i]==2)
		{
			g[i]=rand()%100;//vector para flores amarillas
			
			if(g[i]>=0 && g[i]<=19)//20% de los 50 pares
			{
				FA++;	
			}
			
			else//caso contrario son rojas
			{
				FR++;
			}
		}
	}
	
	cout<<"\nexisten\t"<<FB<<" FLORES BLANCAS ";
	cout<<"\nexisten\t"<<FR<<" FLORES ROJAS ";
	cout<<"\nexisten\t"<<FA<<" FLORES AMARILLAS \n ";
	
	/*si el valor 1 y valor 2 son diferentes de 0, el valor es imprime rojo si no imprime amarillo*/
	
}
