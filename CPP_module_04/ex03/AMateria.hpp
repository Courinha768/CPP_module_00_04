#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

# include "ICharacter.hpp"

class ICharacter;

class AMateria
{

	protected:

		const std::string	type;

	public:

		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria& src);
		virtual ~AMateria();

		virtual std::string const & getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

};


#endif /* ******************************************************** AMATERIA_H */