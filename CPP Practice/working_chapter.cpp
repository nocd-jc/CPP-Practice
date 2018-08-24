#include "../CPP Practice/std_lib_facilities.h"

int main()

{
	vector<int> numbers;
	int i = 0;

	while (numbers.size() < 2) {
		cout << "Please enter a number\n";
		for (int input; cin >> input; )
			numbers.push_back(input);
		cout << numbers[i];
		i++;
	}
		
	keep_window_open();
}








//{
//	cout << "Please enter some words.\n";

//	vector<string> filter = { "poopoo", "peepee", "shit", "fuck" };

//	for (string words; cin >> words;) {

//		for (int i = 0; i < filter.size(); ++i)
//			if (words == filter[i])
//				cout << "BLEEP!\n";
//			else (
//				cout << words << "\n"
//		);
//	}
			
//	keep_window_open();
//}



//{
//	cout << "Enter some words.\n";
//	vector<string> words;
//	for (string temp; cin >> temp;)
//		words.push_back(temp);
//	cout << "Number of words: " << words.size() << '\n';

//	sort(words);

//	for (int i = 0; i < words.size(); ++i)
//		if (i == 0 || words[i - 1] != words[i])
//			cout << words[i] << "\n";

//}