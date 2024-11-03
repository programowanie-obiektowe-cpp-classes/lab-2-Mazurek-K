#pragma once

#include "Resource.hpp"

class ResourceManager
{
private:
    Resource* res;

public:
    
    ResourceManager() : res(new Resource()) {}
    ResourceManager(const ResourceManager& other) : res(new Resource(*other.res)) {}

    
    ResourceManager& operator=(const ResourceManager& other)
    {
        if (this != &other) {
            delete res;                          
            res = new Resource(*other.res); 
        }
        return *this;
    }
    
    ~ResourceManager()
    {
        delete res; 
    }

    double get() const
    {
        return (*res).get(); 
    }
};
