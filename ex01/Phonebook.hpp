#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook	{
	private :
		Contact	Contacts[8];
		int		index;
	public :
		Phonebook(void);
		~Phonebook(void);
		void		Menu(void);
		void		Add(void);
		std::string UserInput(std::string name, std::string prompt);
		std::string	AddSpaces(int n);
		void		DisplayContact(int to_display, std::string word);
		void		DisplayBook(void);
		int			DisplayIndex(std::string index);
		void		Search(void);
};

#endif