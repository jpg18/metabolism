/* sim.h
 */

#ifndef SIM_H
#define SIM_H 

#include <map>
#include <stdint.h>
#include <vector>
#include "atom.h"
#include "element.h"
#include "reaction.h"

typedef std::map<std::string,Element*> ElementMap;
typedef std::map<int,Reaction*> ReactionMap;
typedef std::vector<Element*> ElementVector;

class Sim
{
   public:
      // Constructor
      Sim();

      // Methods
      void initialize();
      void printElements();
      void printReactions();
      void printWorld();
      void iterate();

      void takeCensus( int iter );
      void finalizeAtoms();

   private:
      // Sim attributes
      ElementMap periodicTable;
      ReactionMap rxnTable;
      int worldX;
      int worldY;
      Atom** world;
      uint8_t* claimed;
      unsigned int* positions;
      
      // RNG parameters
      int randNums_length_in_64_bit_ints;
      uint8_t* randNums;

      // Private methods
      void initRNG( int seed );
      void generateRandNums();
      void shufflePositions();

      void moveAtoms();
      int dx( int x, int y );
      int dy( int x, int y );

      ElementVector ev( int elementCount, ... );
      int getWorldIndex( int x, int y );
      void swapAtoms( int x1, int y1, int x2, int y2 );
};

#endif /* SIM_H */
