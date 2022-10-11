#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 
void func(void){
	
	
	int x;
	
	printf("func x is at %p\n", &x);

}

int main(void){
	
	
	int x;
	printf("func x is at %p\n", &x);
	func();
	
	
	
	return 0;
}
