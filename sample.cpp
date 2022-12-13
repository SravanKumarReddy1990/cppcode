#include <iostream>
using namespace std;
#include <string.h>  
class Car
{
    private:
        Car(){};
        string key;
        string value;
    public:
        Car(string key,string value)
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

void printCarNumbers(Car *cars, int length)
{
    for(int i = 0; i < length; i++)
        cars[i].printNo();
}



int main()
{

string a[15]={"Sravan","Sravan","Sravan","Sravan","ramu","Ravi","Ravi","Ravi","ramu","ramu","ramu","ramu","Rama","Rama","Jagan"};
int al = sizeof(a)/sizeof(a[0]); 
std::cout << al<< std::endl;
  int userInput = 10;

  Car *mycars;
   mycars= (Car*) ::operator new (sizeof(Car)*userInput);

  //for(int i =0;i < userInput;i++)
   // new (&mycars[i]) Car("hi","hi");

 // printCarNumbers(mycars,userInput);
  int m = 0;
        for (int i = 0; i < al; i++) {

            bool contains = false;
            for (int l = 0; l < m; l++) {
                try {
                    // System.out.println(repeated[i][j]);
                    // if (repeated[l][0].equals(a[i])) {
                    if (mycars[l].getKey().compare(a[i])==0) {
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
                 new (&mycars[m]) Car(a[i],strnum);
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
                    std::cout << mycars[i].getKey() << std::endl;
                    std::cout << mycars[i].getValue() << std::endl;
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
