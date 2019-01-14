#include <iostream>

void main(){
	char a[4] = { 1,2,3,4 };
	for (unsigned int i=0; i<4; i++)
		std::cout << "a[" << i << "](" << (int*)&a[i]  << "): " << (int)a[i] << ", ";
	std::cout << "\n\n";

	void *p_a = a;
	

	std::cout << "void *p_a = a; | " << "p_a = " << p_a << " | (*(char *)p_a)+sizeof(char) = " << (*(char *)p_a)+0 << "\n";
	std::cout << "\n";

	for (unsigned int i = 0; i < 4; i++)
		std::cout << "*((int*)p_a+"<< i <<") = " << *((int*)p_a+i) << " | (*(char *)p_a) + sizeof(char)*" << i << " = " << (*(char *)p_a)+sizeof(char)*i << "\n";
	std::cout <<  "\n";

	int b = *((int*)p_a);
	std::cout << "int b = *((int*)p_a);" << " | b = " << b <<  " | &b = " << &b << "\n";
	system("PAUSE");
}