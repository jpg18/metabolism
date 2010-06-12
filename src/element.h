/* element.h
 */

#ifndef ELEMENT_H
#define ELEMENT_H 

#include <string>

class Element
{
   public:
      // Constructor
      Element( std::string initName, char initSymbol, std::string initColor );

      // Get and set functions
      int getKey();
      std::string getName();
      char getSymbol();
      std::string getColor();
      void setColor( std::string newColor );
      int getCount();
      void setCount( int newCount );

   private:
      // Element attributes
      int key;
      std::string name;
      char symbol;
      std::string color;
      int count;
};

#endif /* ELEMENT_H */
