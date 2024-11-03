#pragma once

#include "Resource.hpp"

class ResourceManager
{
private:
    Resource res;

public:
    
    ResourceManager() : res() {}

    
    double get() { return res.get(); }

   
    ResourceManager(const ResourceManager& other) : res(other.res) {}


    


    



};
