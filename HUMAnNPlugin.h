#ifndef HUMANNPLUGIN_H
#define HUMANNPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>

class HUMAnNPlugin : public Plugin
{
public: 
 std::string toString() {return "HUMAnN";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
