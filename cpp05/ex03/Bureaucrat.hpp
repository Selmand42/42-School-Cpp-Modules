#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include <fstream>

class AForm;

class Bureaucrat
{
	private:
		std::string const name;
		int	grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int score);
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat &operator=(const Bureaucrat &other);
		~Bureaucrat();

		void setGrade(int score);
		int	getGrade() const;
		std::string getName() const;
		void increaseScore();
		void decreaseScore();
		void signForm(AForm& form);
		void executeForm(AForm const & form);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};


#endif

std::ostream& operator<<(std::ostream& cout, Bureaucrat& buro);
