/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:07:35 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/14 12:10:12 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	private:
		AMateria*	_learnedMateria[4];
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &to_copy);
		MateriaSource& operator=(MateriaSource const &original);
		~MateriaSource(void);

		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const & type);

};

#endif