//Elizabeth Davis Homework 1

#include <stdio.h>
#include <string.h>
#include "calc.h"

int main() {

	//----Prompt user----//
	int run = 0;
	while (run == 0) {
		printf("Press any key to calculate, X to exit \n");
		char input = getchar();

		//Just making sure the user wants to calculate
		if(input != 'X') {
			printf("Please enter the number of bands the resistor has: \n");
			int numBands;
			scanf("%d", &numBands);

			int t;											//Recalls get char again //scanf and getchar problem 
			while(getchar() != '\n'){
				t=0;
			}

			int go = 0;
			while(go == 0) {
				if(numBands == 4) {
					fourBand();
					go = 1;
				}

				if(numBands == 5) {
					fiveBand();
					go = 1;
				}

				//If neither have it restart
				if(numBands != 4 && numBands != 5){
					printf("Not a valid entry, please re-enter");
					go = 1;
				}
			}
		}

		if(input == 'X') {
			run = 1;
		}
		
		int t;											//Recalls get char again //scanf and getchar problem 
		while(getchar() != '\n'){
			t=0;
		}
	}
}
