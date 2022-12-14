#include <iostream>
using namespace std;
#include <string.h>  
#include "data.h"  

int main()
{

string a[18]={"Sravan","Sravan","Sravan","Sravan","Sravan","ramu","Ravi","Ravi","Ravi","ramu","ramu","ramu","ramu","Rama","Rama","Rama","Jagan","Jagan"};
int al = sizeof(a)/sizeof(a[0]); 
std::cout << al << std::endl;
  int userInput = 10;
  Data *data;
   data= (Data*) ::operator new (sizeof(Data)*userInput);
  int m = 0;
        for (int i = 0; i < al; i++) {
            bool contains = false;
            for (int l = 0; l < m; l++) {
                try {
                    if (data[l].getKey().compare(a[i])==0) {
                        contains = true;
                    }
                } catch (const char* e) {
                    cerr << e << endl;
                }
            }
            if (contains == false) {
                int n = 0;
                string strnum;
                for (int j = 0; j < al; j++) {
                    if (a[i].compare(a[j])==0) {
                        n++;
			 strnum = to_string(n);
                    }
                }
                 new (&data[m]) Data(a[i],strnum);
                m++;
            }
        }
        int value=0;
        string name="";
        for (int i = 0; i < m; i++) {
        
                    std::cout << data[i].getKey() << std::endl;
                    std::cout << data[i].getValue() << std::endl;
            }

  return 0;
}
