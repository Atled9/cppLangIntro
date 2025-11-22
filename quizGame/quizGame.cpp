#include <iostream>

int main() {

	std::string questions[] = {"1. What year was C++ created?: ",
				   "2. Who invented C++?: ",
				   "3. What is the predecessor of C++?: ",
				   "4. What type of language is C++?: "};

	std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
	       			   {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
			   	   {"A. C", "B. C+", "C. C--", "D. B++"},
				   {"A. Interpreted", "B. Compiled", "C. Markup", "D. Ancient"}};

	char answerKey[] = {'C', 'B', 'A', 'B'};

	int numQuestions = sizeof(questions)/sizeof(questions[0]);
	int numOptions;
	char guess;
	int score = 0;
	
	for (int i = 0; i < numQuestions; i++) {
		std::cout << "****************************************\n";
		std::cout << questions[i] << '\n';
		std::cout << "****************************************\n";

		int numOptions = sizeof(options[i])/sizeof(options[i][0]);
		for (int j = 0; j < numOptions; j++) {
			std::cout << options[i][j] << '\n';
		}

		std::cin >> guess;
		guess = toupper(guess);

		if (guess == answerKey[i]) {
			std::cout << "CORRECT!\n";
			score++;
		}
		else {
			std::cout << "WRONG!\n";
			std::cout << "Answer: " << answerKey[i] << '\n';
		}
	}

	std::cout << "****************************************\n";
	std::cout << "*               RESULTS                *\n";
	std::cout << "****************************************\n";
	std::cout << "CORRECT GUESSES: " << score << '\n';
	std::cout << "NUMBER OF QUESTIONS: " << numQuestions << '\n';
	std::cout << "SCORE: " << (score/(double)numQuestions) * 100 << '%';

	return 0;
}
