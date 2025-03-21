#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string const name;
		bool sign;
		int const req_grade;
		int const req_exec;

	public:
		AForm();
		AForm(std::string name, int grade, int exec);
		virtual ~AForm();

		virtual void execute(Bureaucrat const & executor) const = 0;
		void beSigned(Bureaucrat& buro);
		std::string getName() const;
		int getReqGrade() const;
		int getReqExec() const;
		int getSign() const;
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

		class FormNotSignedException: public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
};

std::ostream& operator<<(std::ostream& cout, AForm& form);


#endif
