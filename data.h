#include <iostream>
using namespace std;
#include <string.h>  
class Data
{
    private:
        Data(){};
        string key;
        string value;
    public:
        Data(string key,string value)
        {
          this->key=key;
          this->value=value;
        }
        string getKey(){return this->key;}        
        string getValue(){return this->value;}
        void setKey(string key){this->key=key;}
        
        void setValue(string value){this->value=value;}
        void printNo()
        {
          std::cout << key << std::endl;
        }
};


