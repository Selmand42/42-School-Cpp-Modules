#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <stdbool.h>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const name;
		bool sign;
		int const req_grade;
		int const req_exec;

	public:
		Form();
		Form(std::string name, int grade, int exec);
		Form(const Form& form);
		Form &operator=(const Form &other);
		~Form();

		void beSigned(Bureaucrat& buro);
		std::string getName();
		int getReqGrade();
		int getReqExec();
		int getSign();
		void setSign(int sign);

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

std::ostream& operator<<(std::ostream& cout, Form& form);


#endif
