#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main(){
	srand(time(NULL));

	printf(R"EOF(______             _                                                                                           _                
| ___ \           | |                                                                                         | |               
| |_/ /  __ _   __| |  __ _  ___  ___   _ __    __ _  _ __ ___    ___    __ _   ___  _ __    ___  _ __   __ _ | |_   ___   _ __ 
| ___ \ / _` | / _` | / _` |/ __|/ __| | '_ \  / _` || '_ ` _ \  / _ \  / _` | / _ \| '_ \  / _ \| '__| / _` || __| / _ \ | '__|
| |_/ /| (_| || (_| || (_| |\__ \\__ \ | | | || (_| || | | | | ||  __/ | (_| ||  __/| | | ||  __/| |   | (_| || |_ | (_) || |   
\____/  \__,_| \__,_| \__,_||___/|___/ |_| |_| \__,_||_| |_| |_| \___|  \__, | \___||_| |_| \___||_|    \__,_| \__| \___/ |_|   
                                                                         __/ |                                                  
                                                                        |___/                                                   
									)EOF");




	char forename[100][16] = {"ongar", "bangor","gribis",
        "gangur", "gambash", "drakor", "shadur", "goggis", "dlimpar",
        "glimpar", "bolbo", "angresh", "kvangor", "tribis",
        "dabesh", "grastan", "dushan", "kobil", "tramvar", "solpesh",
        "okrip", "takosh", "blambur", "brambor", "sergej", "olash",
        "tramvan", "gugul", "gangor"};
	int quantity;

	printf("\n\nWelcome to the \033[1;31mBadass Name Generator\033[0m.\n");
	printf("How many badass names do you want generated?");
	scanf("%d",&quantity);



	printf("\n Your badass names are:\n");

	for(int i = 0; i < quantity; i++){
		int forename_index = rand() % 100;
		int surname_index = rand() % 108;

		char full_name[32];

		strcpy(full_name, forename[forename_index]);
		strcat(full_name, " ");
		strcat(full_name, surname[surname_index]);

		printf("%s\n",full_name);

		
	}


					return 0;
}
