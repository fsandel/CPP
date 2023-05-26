#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", _std_sign, _std_exec), _target("default_target")
{
	std::cout << "A default ShrubberyCreationForm got created." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", _std_sign, _std_exec), _target(target)
{
	std::cout << "A ShrubberyCreationForm with the target " << target << " got created." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm&obj)
{
	this->setSigned(obj.getSigned());
	this->_target = obj._target;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj): AForm(obj), _target(obj._target)
{
	*this = obj;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	std::fstream file;
	file.open((this->_target + "_shrubbery").c_str(), std::ios::out);
	file << "\
                                                  . \n\
                                   .         ;      \n\
      .              .              ;%     ;;       \n\
        ,           ,                :;%  %;        \n\
         :         ;                   :;%;'     ., \n\
,.        %;     %;            ;        %;'    ,;   \n\
  ;       ;%;  %%;        ,     %;    ;%;    ,%'    \n\
   %;       %;%;      ,  ;       %;  ;%;   ,%;'     \n\
    ;%;      %;        ;%;        % ;%;  ,%;'       \n\
     `%;.     ;%;     %;'         `;%%;.%;'         \n\
      `:;%.    ;%%. %@;        %; ;@%;%'            \n\
         `:%;.  :;bd%;          %;@%;'              \n\
           `@%:.  :;%.         ;@@%;'               \n\
             `@%.  `;@%.      ;@@%;                 \n\
               `@%%. `@%%    ;@@%;                  \n\
                 ;@%. :@%%  %@@%;                   \n\
                   %@bd%%%bd%%:;                    \n\
                     #@%%%%%:;;                     \n\
                     %@@%%%::;                      \n\
                     %@@@%(o);  . '                 \n\
                     %@@@o%;:(.,'                   \n\
                 `.. %@@@o%::;                      \n\
                    `)@@@o%::;                      \n\
                     %@@(o)::;                      \n\
                    .%@@@@%::;                      \n\
                    ;%@@@@%::;.                     \n\
                   ;%@@@@%%:;;;.                    \n\
               ...;%@@@@@%%:;;;;,..    Gilo97       \n\
                                                    \n\
----------------------------------------------------\n\
Thank you for visiting https://asciiart.website/    \n\
This ASCII pic can be found at                      \n\
https://asciiart.website/index.php?art=plants/trees \n\
";
	file.flush();
	file.close();
}
