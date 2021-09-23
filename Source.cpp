#include<iostream>
#include<map>
#include<string>


int main(int argc, char* argv[])
{

	setlocale(LC_ALL, "Rusiian");

	std::map<std::string, std::string> dictionary;
	std::map<std::string, std::string>::iterator it;
	char choice;
	std::string engl_word;
	std::string ukr_word;


	while (true)
	{
		system("CLS");

		std::cout << "Make your choice\n";
		std::cout << "1)add word, 2)search word 3) erase word) 4) edit word 5) exit ";
		std::cin >> choice;


		switch (choice)
		{
		case '1':
		{
			std::cout << "Please enter english word\n";
			std::cin >> engl_word;

			std::cout << "Please enter ukr word\n";
			std::cin >> ukr_word;

			dictionary.insert(std::make_pair(engl_word, ukr_word));


		}break;
		case '2':
		{
			std::cout << "Please etner the eglish word(key word) ";
			std::cin >> engl_word;

			it = dictionary.find(engl_word);

			if (it != dictionary.end())
			{
				std::cout << it->second << std::endl;
			}
			else
			{
				std::cout << "There is no suh word\n";
			}


		}break;
		case '3':
		{

			std::cout << "Please enter word you want to erase ";
			std::cin >> engl_word;

			it = dictionary.find(engl_word);
			if (it != dictionary.end())
			{
				dictionary.erase(it);
				std::cout << "The word was succesfully removed\n";
			}
			else
			{
				std::cout << "No such word\n";
			}

		}break;
		case '4':
		{
			std::cout << "Please enter word you want to erase ";
			std::cin >> engl_word;
			it = dictionary.find(engl_word);
			if (it != dictionary.end())
			{
				std::cout << "Please etner the new ukr word\n";
				std::cin >> ukr_word;
				dictionary[engl_word] = ukr_word;

				std::cout << "The word was succesfully edited\n";

			}
			else
			{
				std::cout << "No such word\n";
			}

		}break;
		case '5':
		{
			exit(0);

		}break;
		}

		system("pause");
	}






	return EXIT_SUCCESS;
}
