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
                    // System.out.println(repeated[i][j]);
                    // if (repeated[l][0].equals(a[i])) {
                    if (data[l].getKey().compare(a[i])==0) {
                        contains = true;
                    }
                } catch (const char* e) {
                    // TODO: handle exception
                    cerr << e << endl;
                }
            }
            if (contains == false) {
                int n = 0;
                string strnum;
                //da.setElement(m, 0, 0, a[i]);
                //mycars[m].setKey(a[i]);
                // repeated[m][0] = a[i];
               // da.setElement(m, 0, 0, a[i].length()+"");
                for (int j = 0; j < al; j++) {
                    if (a[i].compare(a[j])==0) {
                        n++;
			 strnum = to_string(n);
                        // repeated[m][1]=n + "";
                      //  mycars[m].setValue(n+"");
                        //da.setElement(m, 1, 0, n + "");
                    }
                }
                //std::cout << a[i]<< std::endl;
                //std::cout << n<< std::endl;
                 new (&data[m]) Data(a[i],strnum);
                m++;
            }
        }

       // da.swapElements(m, 2, 2);
        
        int value=0;
        string name="";
        for (int i = 0; i < m; i++) {
        
            // System.out.println("");
           // for (int j = 0; j < 2; j++) {
            //    if (null != da.getElement(i, j, 0)) {
                    std::cout << data[i].getKey() << std::endl;
                    std::cout << data[i].getValue() << std::endl;
                    //if(Integer.parseInt(da.getElement(i, 1, 0)) >value) {
                    //    value =Integer.parseInt(da.getElement(i, 1, 0));
                    //    name=da.getElement(i, 0, 0);
                    //}
               //     System.out.println(" " + da.getElement(i, j, 0));
              //      }
             //   }
            }

  return 0;
}
