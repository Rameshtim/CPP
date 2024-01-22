/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 12:56:46 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/05 15:02:30 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
// # include <string>

# include <iostream>

class Animal {
	protected:
		std::string _type;
	
	public:
		Animal(void);
		Animal(const Animal &to_copy);
		Animal& operator=(const Animal &original);
		/* If you delete an object through a pointer to the base class, 
		and if the base class destructor is not virtual, then only the base 
		class destructor will be called. */
		// ~Animal(void);
		virtual ~Animal(void);

		virtual void	makeSound(void) const;
		std::string		getType(void) const;
		void			setType(std::string type);
		
};

#endif

/* 
class Base {
public:
    // Non-virtual destructor
    ~Base() {
        std::cout << "Base destructor" << std::endl;
    }
};

class Derived : public Base {
public:
    ~Derived() {
        std::cout << "Derived destructor" << std::endl;
    }
};

int main() {
    Base* ptr = new Derived();  // Pointer to derived class object

    delete ptr;  // Without a virtual destructor, only Base destructor is called

    return 0;
}
 */