#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "HUMAnNPlugin.h"

void HUMAnNPlugin::input(std::string file) {
 inputfile = file;
}

void HUMAnNPlugin::run() {}

void HUMAnNPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = ""; 
myCommand += "humann2 --input " + inputfile + " --output "+outputfile.substr(0, outputfile.find_last_of('/'))+ " --output-basename "+outputfile.substr(outputfile.find_last_of('/')+1, outputfile.length());
myCommand += " ";
 system(myCommand.c_str());
}

PluginProxy<HUMAnNPlugin> HUMAnNPluginProxy = PluginProxy<HUMAnNPlugin>("HUMAnN", PluginManager::getInstance());
