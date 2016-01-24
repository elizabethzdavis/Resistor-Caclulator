#include <stdio.h>
#include <math.h>
#include <string.h>


//Interprets the color and gets the number value
int colorCalc(char* color) {
	//0 if the same
	if(strcmp(color, "black") == 0 || strcmp(color, "Black") == 0) {
		return 0;
	}

	if(strcmp(color, "brown") == 0 || strcmp(color, "Brown") == 0) {
		return 1;
	}

	if(strcmp(color, "red") == 0 || strcmp(color, "Red") == 0) {
		return 2;
	}

	if(strcmp(color, "orange") == 0 || strcmp(color, "Orange") == 0) {
		return 3;
	}

	if(strcmp(color, "yellow") == 0 || strcmp(color, "Yellow") == 0) {
		return 4;
	}

	if(strcmp(color, "green") == 0 || strcmp(color, "Green") == 0) {
		//printf("it goes in the right string compare");
		return 5;
	}

	if(strcmp(color, "blue") == 0 || strcmp(color, "Blue") == 0) {
		return 6;
	}

	if(strcmp(color, "violet") == 0 || strcmp(color, "Violet") == 0) {
		return 7;
	}

	if(strcmp(color, "grey") == 0 || strcmp(color, "Grey") == 0) {
		return 8;
	}

	if(strcmp(color, "white") == 0 || strcmp(color, "White") == 0) {
		return 9;
	}

	if(strcmp(color, "gold") == 0 || strcmp(color, "Gold") == 0) {
		return -1;
	}

	if(strcmp(color, "silver") == 0 || strcmp(color, "Silver") == 0) {
		return -2;
	}

	return 10000;
}

//Return 0 if color is one of them for the 4 band resistor
int validateColor4(char* color) {
	if(strcmp(color, "black") == 0 || strcmp(color, "Black") == 0) {
		return 0;
	}

	if(strcmp(color, "brown") == 0 || strcmp(color, "Brown") == 0) {
		return 0;
	}

	if(strcmp(color, "red") == 0 || strcmp(color, "Red") == 0) {
		return 0;
	}

	if(strcmp(color, "orange") == 0 || strcmp(color, "Orange") == 0) {
		return 0;
	}

	if(strcmp(color, "yellow") == 0 || strcmp(color, "Yellow") == 0) {
		return 0;
	}

	if(strcmp(color, "green") == 0 || strcmp(color, "Green") == 0) {
		return 0;
	}

	if(strcmp(color, "blue") == 0 || strcmp(color, "Blue") == 0) {
		return 0;
	}

	if(strcmp(color, "violet") == 0 || strcmp(color, "Violet") == 0) {
		return 0;
	}

	if(strcmp(color, "grey") == 0 || strcmp(color, "Grey") == 0) {
		return 0;
	}

	if(strcmp(color, "white") == 0 || strcmp(color, "White") == 0) {
		return 0;
	}

	else {
		return 1;
	}
}

//Return 0 if color is one of them for the 5 band resistor
int validateColor5(char * color) {
	if(strcmp(color, "black") == 0 || strcmp(color, "Black") == 0) {
		return 0;
	}

	if(strcmp(color, "brown") == 0 || strcmp(color, "Brown") == 0) {
		return 0;
	}

	if(strcmp(color, "red") == 0 || strcmp(color, "Red") == 0) {
		return 0;
	}

	if(strcmp(color, "orange") == 0 || strcmp(color, "Orange") == 0) {
		return 0;
	}

	if(strcmp(color, "yellow") == 0 || strcmp(color, "Yellow") == 0) {
		return 0;
	}

	if(strcmp(color, "green") == 0 || strcmp(color, "Green") == 0) {
		return 0;
	}

	if(strcmp(color, "blue") == 0 || strcmp(color, "Blue") == 0) {
		return 0;
	}

	if(strcmp(color, "violet") == 0 || strcmp(color, "Violet") == 0) {
		return 0;
	}

	if(strcmp(color, "grey") == 0 || strcmp(color, "Grey") == 0) {
		return 0;
	}

	if(strcmp(color, "white") == 0 || strcmp(color, "White") == 0) {
		return 0;
	}

	else {
		return 1;
	}
}

//Return 0 if color is one of them for the 4 band resistor 4th band
int validateColor5last(char * color) {
	if(strcmp(color, "black") == 0 || strcmp(color, "Black") == 0) {
		return 0;
	}

	if(strcmp(color, "brown") == 0 || strcmp(color, "Brown") == 0) {
		return 0;
	}

	if(strcmp(color, "red") == 0 || strcmp(color, "Red") == 0) {
		return 0;
	}

	if(strcmp(color, "orange") == 0 || strcmp(color, "Orange") == 0) {
		return 0;
	}

	if(strcmp(color, "yellow") == 0 || strcmp(color, "Yellow") == 0) {
		return 0;
	}

	if(strcmp(color, "green") == 0 || strcmp(color, "Green") == 0) {
		return 0;
	}

	if(strcmp(color, "blue") == 0 || strcmp(color, "Blue") == 0) {
		return 0;
	}

	if(strcmp(color, "violet") == 0 || strcmp(color, "Violet") == 0) {
		return 0;
	}

	if(strcmp(color, "grey") == 0 || strcmp(color, "Grey") == 0) {
		return 0;
	}

	if(strcmp(color, "white") == 0 || strcmp(color, "White") == 0) {
		return 0;
	}

	if(strcmp(color, "gold") == 0 || strcmp(color, "Gold") == 0) {
		return 0;
	}

	if(strcmp(color, "silver") == 0 || strcmp(color, "Silver") == 0) {
		return 0;
	}

	else {
		return 1;
	}
}

//Gets tolerance for 4 band resistor
int getTolerance4(char* color) {
	if(strcmp(color, "silver") == 0 || strcmp(color, "Silver") == 0) {
		return 10;
	}

	if(strcmp(color, "gold") == 0 || strcmp(color, "Gold") == 0) {
		return 5;
	}

	else {
		return 20;
	}
}

//Gets tolerance for a 5 band resistor
float getTolerance5(char* color) {
	if(strcmp(color, "brown") == 0 || strcmp(color, "Brown") == 0) {
		return 1;
	}

	if(strcmp(color, "green") == 0 || strcmp(color, "Green") == 0) {
		return 0.5;
	}

	if(strcmp(color, "blue") == 0 || strcmp(color, "Blue") == 0) {
		return 0.25;
	}

	if(strcmp(color, "violet") == 0 || strcmp(color, "Violet") == 0) {
		return 0.1;
	}

	return 0;
}

//return 1 if the entered tolerance color is not valid
int validateTol(char* color) {
	if(strcmp(color, "brown") == 0 || strcmp(color, "Brown") == 0) {
		return 0;
	}

	if(strcmp(color, "green") == 0 || strcmp(color, "Green") == 0) {
		return 0;
	}

	if(strcmp(color, "blue") == 0 || strcmp(color, "Blue") == 0) {
		return 0;
	}

	if(strcmp(color, "violet") == 0 || strcmp(color, "Violet") == 0) {
		return 0;
	}

	else {
		return 1;
	}
}

//Calculates for four bands
void fourBand() {
	//max length is 6

	//--Get colors--//
	char color1[7];
	char color2[7];
	char color3[7];
	char color4[7];

	char dummy;

	printf("Please enter the first color: \n");
	scanf("%s", color1);
	dummy = getchar();
		while(validateColor4(color1) == 1) {									//Check if valid//
			printf("Not a valid color, please enter a valid color: \n");
			scanf("%s", color1);
		}
	printf("Please enter the second color: \n");
	scanf("%s", color2);
	dummy = getchar();
		while(validateColor4(color2) == 1) {
			printf("Not a valid color, please enter a valid color: \n");
			scanf("%s", color2);
		}
	printf("Please enter the third color: \n");
	scanf("%s", color3);
	dummy = getchar();
		while(validateColor4(color3) == 1) {
			printf("Not a valid color, please enter a valid color: \n");
			scanf("%s", color3);
		}
	printf("Please enter the fourth color: \n");
	scanf("%s", color4);


	//--Calculate the values of colors--//
	int c1 = colorCalc(color1);				
	int c2 = colorCalc(color2);
	int c3 = colorCalc(color3);

	//--Calculate the tolerance--//
	int tol = getTolerance4(color4);

	printf("R = %d%d x 10 ^%d Ohms +/- %d%%\n", c1, c2, c3, tol);
}

//Calculates for five bands
void fiveBand() {

	//--Get colors--//
	char color1[7];
	char color2[7];
	char color3[7];
	char color4[7];
	char color5[7];

	char dummy;

	printf("Please enter the first color: \n");
	scanf("%s", color1);
	//scanf("%c", &dummy);
	dummy = getchar();
		while(validateColor5(color1) == 1) {
			printf("Not a valid color, please enter a valid color: \n");
			scanf("%s", color1);
		}
	//printf("%s\n", color1);
	printf("Please enter the second color: \n");
	scanf("%s", color2);
	//scanf("%c", &dummy);
	dummy = getchar();
		while(validateColor5(color2) == 1) {
			printf("Not a valid color, please enter a valid color: \n");
			scanf("%s", color2);
		}
	//printf("%s\n", color2);
	printf("Please enter the third color: \n");
	scanf("%s", color3);
	//scanf("%c", &dummy);
	dummy = getchar();
		while(validateColor5(color3) == 1) {
			//printf("it runs this");
			printf("Not a valid color, please enter a valid color: \n");
			scanf("%s", color3);
		}
	//printf("%s\n", color3);
	printf("Please enter the fourth color: \n");
	scanf("%s", color4);
	//scanf("%c", &dummy);
	dummy = getchar();
		while(validateColor5last(color4) == 1) {
			printf("Not a valid color, please enter a valid color: \n");
			scanf("%s", color4);
		}
	//printf("%s\n", color4);
	printf("Please enter the fifth color: \n");
	scanf("%s", color5);
		while(validateTol(color5) == 1) {
			printf("Not a valid color, please enter a valid color: \n");
			scanf("%s", color5);
		}
	//printf("%s\n", color5);

		/*
	printf("%s\n", color1);
	printf("%s\n", color2);
	printf("%s\n", color3);
	printf("%s\n", color4);
	printf("%s\n", color5);

		*/

	//--Calculate the values of colors--//
	int c1 = colorCalc(color1);
	int c2 = colorCalc(color2);
	//printf("color3 = %s\n", color3);
	int c3 = colorCalc(color3);
	int c4 = colorCalc(color4);

	//--Calculate the tolerance--//
	float tol = getTolerance5(color5);

	//--print--//
	//printf("c1 = %d\n", c1);
	//printf("Color 1 = %s\n", color1);
	//printf("c2 = %d\n", c2);
	//printf("Color 2 = %s\n", color2);
	//printf("c3 = %d\n", c3);
	//printf("Color 3 = %s\n", color3);
	//printf("c4 = %1.2f\n", c4);
	//printf("tolerance = %1.2f\n", tol);

	printf("R = %d%d%d x 10 ^%d Ohms +/- %1.2f%%\n", c1, c2, c3, c4, tol); 

}

