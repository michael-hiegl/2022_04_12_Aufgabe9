//**************************************************************************
//**************************************************************************
//**
//**	Projekt: 2022_04_12_Aufgabe9	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 4/12/2022 7:18:07 PM
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************
void ArrayQuadrat(int Array[], int AnzahlElemente)
{
	for (int i = 0, i < AnzahlElemente, i++)
		Array[i] = Array[i] * Array[i];
}

void VariableQuadrat()
{
	Variable = Variable * Variable;
}


int main(void)
{
	//Variables
	int MeinArray[] = { 0,1,2,3,5,8,13,21,34,55 };
	int Variable = 10;



	//Code
	printf("Mein Array: ");
	for (int i = 0; i < sizeof(MeinArray) / sizeof(int); i++)
	{
		printf("%i", MeinArray[i]);
	}

	ArrayQuadrat(MeinArray, sizeof(MeinArray) / sizeof(int);

	for(int i=0;i<)

	printf("\n\n%i", Variable);



	getchar();
	fflush(stdin);
	getchar();
	return 0;
}