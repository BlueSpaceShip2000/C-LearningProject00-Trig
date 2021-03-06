#include "stdafx.h" //THIS HEADER FILE MUST BE THE FIRST LINE IN ALL SOLUTIONS IN MICROSOFT VISUAL STUDIO
#include <iostream>
#include <cmath>
#include <iomanip> //This header file is needed to use stream manipulators


//This program is a SSS triangle solver.

int main()
{
	double side_a;
	double side_b;
	double side_c;

	double angle_1deg;
	double angle_2deg;
	double angle_3deg;

	double angle_1rad;
	double angle_2rad;
	
	double largestSide;
	double largest_angel;
	
	double find_angle1_step1;
	double find_angle1_step2;
	
	double find_angle2_step1;
	double find_angle2_step2;
	
	double find_angle3_step1;

	double pi = 3.14159;
	

	std::cout << std::setw(16) << "Input Side a: ";
	std::cin >> side_a;
	std::cout << std::setw(16) << "Input Side b: ";
	std::cin >> side_b;
	std::cout << std::setw(16) << "Input Side c: ";
	std::cin >> side_c;

	if (side_c > (side_a + side_b) || side_b > (side_a + side_c) || side_a > (side_b + side_c) || (side_c - side_b) < 0)
	{
		std::cout << "Unsolvable. Length of sides do not form a triangle." << std::endl;
	}
	else
	{
		if (side_a > side_b && side_a > side_c)
		{
			largestSide = side_a;
		}
		else if (side_b > side_a && side_b > side_c)
		{
			largestSide = side_b;
		}
		else
		{
			largestSide = side_c;
		}

		find_angle1_step1 = (side_a * side_a + side_c * side_c - largestSide * largestSide) / (2 * side_a * side_c);
		find_angle1_step2 = acos((find_angle1_step1));
		angle_1rad = find_angle1_step2;
		

		find_angle2_step1 = (side_a * sin(angle_1rad)) / side_b;
		find_angle2_step2 = asin(find_angle2_step1);
		angle_2rad = find_angle2_step2;
		
		
		angle_1deg = angle_1rad * 180.0 / pi;
		angle_2deg = angle_2rad * 180.0 / pi;


		find_angle3_step1 = 180.0 - angle_1deg - angle_2deg;
		angle_3deg = find_angle3_step1;


		std::cout << std::setw(37) << "The First angle  is approximately: " << std::setw(5) << std::setprecision(3) << angle_1deg << " degrees" << std::endl;
		std::cout << std::setw(37) << "The Second angle is approximately: " << std::setw(5) << std::setprecision(3) << angle_2deg << " degrees" << std::endl;
		std::cout << std::setw(37) << "The Third angle  is approximately: " << std::setw(5) << std::setprecision(3) << angle_3deg << " degrees" << std::endl;	
	
	}

    return 0;

}
