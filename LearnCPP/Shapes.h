#pragma once
#include <iostream>


void Square(int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << " +";
		
		for (int j = 1; j < size; j++)
		{
			std::cout << " +";
		}
		
		std::cout << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << " SQUARE";
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}

void Rect(int height, int width)
{
	for (int i = 0; i < height; i++)
	{
		std::cout << " +";

		for (int j = 2; j < width; j++)
		{
			std::cout << " +";
		}

		std::cout << " +";

		std::cout << std::endl;
	}

	std::cout << std::endl;
	std::cout << " RECT";
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}

void RightTriangle(int size)
{
	for (int i = 1; i < size + 1; i++)
	{	
		for (int j = 0; j < i; j++)
		{
			std::cout << " +";
		}

		std::cout << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << " RIGHT TRIANGLE";
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}

void Triangle(int size)
{
	for (int i = 1; i < size + 1; i++)
	{
		for (int k = size; k > i; k--)
		{
			std::cout << " ";
		}

		for (int j = 0; j < i; j++)
		{
			std::cout << " +";
		}
				
		std::cout << std::endl;
	}

	std::cout << std::endl;
	std::cout << " TRIANGLE";

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}

void VerticallyTranslatedTriangle(int size)
{
	for (int i = 0; i < size + 1; i++)
	{
		for (int k = size; k > i; k--)
		{
			std::cout << " +";
		}

		for (int j = 0; j < i; j++)
		{
			std::cout << " ";
		}

		std::cout << std::endl;
	}

	std::cout << " VERTICALLY TRANSLATED TRIANGLE";
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}

void Romb(int size)
{
	for (int i = 1; i < size + 1; i++)
	{
		for (int k = size; k > i; k--)
		{
			std::cout << " ";
		}

		for (int j = 0; j < i; j++)
		{
			std::cout << " +";
		}

		std::cout << std::endl;
	}

	for (int i = 1; i < size + 1; i++)
	{
		for (int j = 0; j < i; j++)
		{
			std::cout << " ";
		}
		
		for (int k = size; k > i; k--)
		{
			std::cout << " +";
		}
		
		std::cout << std::endl;
	}

	std::cout << " ROMB";

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}