#ifndef CALC_H_
#define CALC_H_


//Interprets the color and gets the number value
int colorCalc(char* color);
	
//Return 0 if color is one of them for the 4 band resistor
int validateColor4(char* color);
	
//Return 0 if color is one of them for the 5 band resistor
int validateColor5(char* color);
	
//Return 0 if color is one of them for the 5 band resistor 4th band
int validateColor5last(char * color);

//Gets tolerance for 4 band resistor
int getTolerance4(char* color);
	
//Gets tolerance for a 5 band resistor
float getTolerance5(char* color);

//return 1 if the entered tolerance color is not valid
int validateTol(char* color);	

//Calculates for four bands
void fourBand();
	
//Calculates for five bands
void fiveBand();


#endif