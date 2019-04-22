#include <iostream>
#include "Vector.h"
#include "Tree.h"
using namespace std;

int main() {

	Vector<double> v;
	v.add(2.5);
	v.add(5.8);
	v.add(1.2);
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;

	Vector<Tree> v1;
	v1.add(Tree(2, "Alm"));
	v1.add(Tree(3, "Shmknt"));
	v1.add(Tree(1, "Ast"));

	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << endl;

	v1(Tree(5, "Kolsay"));
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << endl;

	system("pause");


}