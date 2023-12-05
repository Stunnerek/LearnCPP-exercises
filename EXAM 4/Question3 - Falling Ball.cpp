

#include <iostream>
int getHeight() {
	int a;
	std::cout << "Enter the height of the tower in meters:";
	std::cin >> a;
	return a;
}
int Fall(int a) {

	int b{ a };
	int seconds{ 0 };
	
	double gravity{ 9.8 };
	while (b > 0) {
		
		
		double height{ b - (gravity*(seconds*seconds)) /2  };
		if (height <= 0) {
			std::cout << "At " << seconds << " seconds, the ball is at the ground"  "\n";
			b = 0;
			return NULL;
			 

		}
		std::cout << "At" << seconds <<"seconds, the ball is at height" << height << "\n";
		
		seconds++;
		b--;
		

	}
	return NULL;
}

int main()
{
	int Height{ getHeight() };
	Fall(Height);
   
}

