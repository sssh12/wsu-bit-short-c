// bbb.c
#include <stdio.h>
#include "aaa.h"	// ¼±¾ðºÎ copy & paste 
#include "bbb.h"

void func3() {
	func4(); 
	func1();
}

void func4() {

}

void main() {
	func4();
}