// MultipleChoiceProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	bool correct = true;
	//Horror Movie Trivia
	const char* questions[6] = {
		"What is the name of the camp where counselors are terrorized by a slasher in Friday the 13th? \n A. Camp Quartz Lake \n B. Camp Diamond Lake \n C. Camp Crystal Lake \n D. Camp Green Lake \n",
		"Michael Myers' mask in Halloween is which actors face? \n A. Clint Eastwood \n B. Marlon Brando \n C. Paul Newman \n D. William Shatner \n",
		"In The Ring, How long do you have to live after watching the cursed tape? \n A. 3 days \n B. 2 Days \n C. 7 days \n D. 4 Days \n",
		"Which film franchise isn't directed by Wes Craven? \n A. A Nightmare on Elm Street \n B. Scream \n C. The Hills Have Eyes \n D. Hellraiser \n",
		"Which is the GREATEST MOVIE OF 2021 DIRECTED BY M NIGHT SHYAMALAN. \n A. OLD \n B. Signals \n C. The Sixth Sense \n D. Malignant \n ",
		"Which year did The Texas Chainsaw Massacre come out :) \n A. 2003 \n B. 2022 \n C. 2013 \n D. 1974 \n"
	};

	srand(time(NULL));
	int questionPicker = rand() % 6;
	char userInput{};
	std::cout << questions[questionPicker];
	std::cin >> userInput;
	userInput = toupper(userInput);
	switch (questionPicker)
	{
	case 0:
	{
		if (userInput == 'C')
		{
			std::cout << "Correct!";
		}
		else
		{
			std::cout << "Incorrect, the correct answer is C. Camp Crystal Lake";
		}
		break;
	}
	case 1:
	{
		if (userInput == 'D')
		{
			std::cout << "Correct!";
		}
		else
		{
			std::cout << "Incorrect, the correct answer is D. William Shatner";
		}
		break;
	}
	case 2:
	{
		if (userInput == 'C')
		{
			std::cout << "Correct!";
		}
		else
		{
			std::cout << "Incorrect, the correct answer is C. 7 Days";
		}
		break;
	}
	case 3:
	{
		if (userInput == 'D')
		{
			std::cout << "Correct!";
		}
		else
		{
			std::cout << "Incorrect, the correct answer is D. Hellraiser";
		}
		break;
	}
	case 4:
	{
		if (userInput == 'A')
		{
			std::cout << "Correct!";
		}
		else
		{
			std::cout << "Incorrect, the correct answer is A. OLD (2021) :D";
		}
		break;
	}
	case 5:
	{
		if (userInput == 'A')
		{
			std::cout << "Correct!";
		}
		else
		{
			std::cout << "Incorrect, the correct answer is A. 2003, the 1974 film was The Texas Chain Saw Massacre, 2022 was Texas Chainsaw Massacre, 2013 was Texas Chainsaw. \n I know, the naming conventions suck";
		}
		break;
	}
	default:
		break;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
