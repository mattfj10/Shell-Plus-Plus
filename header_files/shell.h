#include<string.h>
#include<iostream>
#include<vector>
#include "job.h"
class Shell{

public:

    int parse(std::string command);

    Job spawn(std::string command, std::string args[]);





};