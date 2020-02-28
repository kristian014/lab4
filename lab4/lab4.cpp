#include "pch.h"
#include "Grid.h"
#include <iostream>
using namespace std;

void main(int args, char **argv)
{
	Grid grid;
	grid.LoadGrid("Grid1.txt");
	grid.SaveGrid("OutGrid.txt");

	system("pause");
}