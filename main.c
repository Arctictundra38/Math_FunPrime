#include<stdio.h>
#include<stdbool.h>

/*This piece of program tets if a number is prime using modulo poerator (%) if yes prints 'x' if not prints 'space' the number of numbers to be tested is a user input defined param*/

bool toCheckifPrime(int a);

int main(){

	/*Displays 'c' number of numbers to be tested*/
	int c;
	FILE *fp;
	printf("Choose a number of numbers to be tested\n");
	scanf("%d",&c);
	fp=fopen("primes_snowFall.txt","w");

	/*Prints the output in prime_output.txt*/
	for(int l=1;l<c;l++){
	if(toCheckifPrime(l)==true){
			fprintf(fp,"%s","x");

		}
		else{
			fprintf(fp,"%s"," ");	
		}		
	
	/*Skips a line every 100 characters*/
		if(l%100==0){
			fprintf(fp,"%s","\n");	
		}
	
	}
	/*Prints the output in the user terminal*/
	for(int i=1;i<c;i++){
		if(toCheckifPrime(i)==true){
			printf("x");

		}
		else{
			printf(" ");	
		}		
	
	/*Skips a line every 100 characters*/
		if(i%100==0){
			printf("\n");	
		}
	}
		
 return 0;

}



/*Function returns True is the integer input is a prime number, false otherwise integer >=0*/ 
bool toCheckifPrime(int a){
	bool outPut=true;
	int inter=0;
	for(int i=2;i<a;i++){
		inter=a%i;
		if(inter==0){
			outPut=false;
			break;
		}
		
	}
	return outPut;
}
