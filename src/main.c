#include<stdio.h>
#include<string.h>
#include<stdlib.h>



typedef enum{
	_RN,
	INT_LIT,
	SEMI
} Tokentype;

typedef struct{

	typedef type;
	char* value;

} TOKEN;



int main(int argc , char *argv[]){
	// this will handel if the user forgewt to add an soruce file into the parameter
	if (argc != 2){
		printf("incorrect use od args.., \n");
		printf("the correct usage is .. \n");
		printf("./boom <input>.bm \n");

		return 1;
	}
	
	// starting the main series of steps 
	printf("the running path is = > %s \n",argv[1]);
	
	// opening the files 
	FILE* fl = fopen(argv[1], "r");
	// now finding the lengeth of the file 
	fseek(fl,0, SEEK_END);  //=> this will analiuyse the doc with 0 index to the end 
	
	long size = ftell(fl);
	rewind(fl);

	char* thestr = malloc(size + 1);
	fread(thestr ,1,size,fl);
	thestr[size] = '\0';

	fclose(fl);

	printf("%s\n", thestr);
	return 0;

}
