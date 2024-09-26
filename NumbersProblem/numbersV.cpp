// Numbers Solver

#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(){
	int numbers[] = {-20,11,12,-3,-4,4};

	int result = 0;
	for(int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++){
		result += numbers[i];
	}

	if(result == 0){
		cout<<"Todos los numeros suman 0!";
	} else {
		cout<<"La suma de los numeros no equivale a 0: "<<result;
	}
}