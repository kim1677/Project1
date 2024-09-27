#include "struct_file.h"
#include "func_file.h"


void main() {
	led red;
	init(&red);
	print(&red);

	power(&red);
	power(&red);
}