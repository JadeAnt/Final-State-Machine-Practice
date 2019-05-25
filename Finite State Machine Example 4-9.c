#include <stdio.h>
#include <stdlib.h>

/**In a Finite state machine we continously 
input the same two inputs and when they have 
an equal amount of each other, we perform an action, 
and if not we do not**/

int main(int argc, char * argv[]){
	int nr_fives = 0, nr_tens = 0;
	int light_on_off;
	int value; 
	
	printf("Enter value (5/10/0)\n: ");
	scanf("%d", &value);
	
	while(value != 0){
		if(value == 5)
			nr_fives++;
		else
			nr_tens++;
		
		//if the nr_tens of nr_fives are even, then the lights are on. othewise, they are off. 
		if(nr_tens % 2 == 0 && nr_fives % 2 == 0){
			light_on_off = 1;
		}
		else
			light_on_off = 0;
				
		if(light_on_off == 1)
			printf("Light is on\n");
		else
			printf("Light is off\n");
		
		printf("Enter value (5/10/0)\n: ");
		scanf("%d", &value);
		
	}//while
	
	return 0;
}
