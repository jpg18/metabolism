/* options.h
 */

#ifndef OPTIONS_H
#define OPTIONS_H

#include <fstream>
#include <getopt.h>
#include <string>

class Options
{
   public:
      // Constructor
      Options( int argc, char* argv[] );

      // Options output methods
      void openFiles();
      void printVersion();
      void printHelp();

      // Options attributes
      int seed;
      int maxIters;
      int worldX;
      int worldY;
      int atomCount;
      int gui;
      bool doRxns;
      bool doShuffle;
      int sleep;
      bool verbose;
      bool progress;
      std::string configFilePath;
      std::string censusFilePath;
      std::string diffusionFilePath;
      std::string randFilePath;
      std::ofstream configFile;
      std::ofstream censusFile;
      std::ofstream diffusionFile;
      std::ofstream randFile;
      std::ifstream loadFile;

      // Options attribute values
      enum
      {
         GUI_OFF,
         GUI_QT,
         GUI_NCURSES
      };
};

#endif /* OPTIONS_H */
