#include "pch.h"
#include "Grid.h"
#include <fstream>
using namespace std;

Grid::Grid()
{
}

Grid::~Grid()
{
}

void Grid::LoadGrid(const char filename[])
{
	ifstream Infile(filename);
	if (Infile.is_open()) {
		for (int y = 0; y < 9; y++) {
			for (int x = 0; x < 9; x++) {
				Infile >> m_grid[x][y];
			}
		}
	}


}

void Grid::SaveGrid(const char filename[])
{
	ofstream Readfileforoutputting(filename);
	for (int y = 0; y < 9; y++) 
	{
		for (int x = 0; x < 9; x++) {
			
			
			
			Readfileforoutputting  << m_grid[x][y] <<' ';
				
		}
		Readfileforoutputting << endl; 
	}
	
		
}

