// Numbers Solver

#include <iostream>
#include <list>
#include <cstdlib>
#define maxnum 30

using namespace std;

int main(){
	int pv = 1 + rand()%maxnum; // Positive value
	int nv = pv; // Negative value
	list<int> pn; // Positive Numbers
	list<int> nn; // Negative Numbers

	int aux = 0;

	while(pv > 0){
		aux = 1 + rand()%pv;
		cout<<aux<<endl;
		pn.push_back(aux);
		pv -= aux;
	}

	aux = 0;

	while(nv > 0){
		aux = 1 + rand()%nv;
		cout<<aux<<endl;
		nn.push_back(aux);
		nv -= aux;
	}

	for(int i : nn){
		cout<<"-"<<i<<" ";
	}
	for(int i : pn){
		cout<<i<<" ";
	}
}