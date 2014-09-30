/*************************************************************************
 *
 *      program name:       VolumePointer
 *      Author:             Cruze Goodin
 *      remarks:           Use pointers to determine volume and area of Cylinder
 *
 *************************************************************************/

/******************************************
 *     library includes
 ******************************************/
#include <iostream>                // needed for I/O
#include <iomanip>
#include <cmath>

/******************************************
 *     pre-processor
 ******************************************/
#define PI 3.14159
using namespace std;

/****************************************
 *          function prototypes
 ****************************************/
void arithmetic(int, int, float*, float*);

/*****************************************
 *   main() - the function that executes
 *****************************************/
int main()
{
    /*******************************
     *   local variables            *
     *******************************/
    
    int inHeight;   //Height integer
    int inRadius;   //Radius integer
    
    float *pVolume = new float; //volume pointer
    float *pArea = new float;   //area pointer
    
    //input
    cout << "What is Heighth of cylinder? ";
    cin >> inHeight;
    cout << "What is Radius of cylinder? ";
    cin >> inRadius;
    
    //function call
    arithmetic(inHeight, inRadius, pVolume, pArea);
    
    //output
    cout << "\n *** using the pointers *** \n\n";
    cout << "area:   \t" << *pArea << endl;
    cout << "volume: \t" << *pVolume << endl;

    system("pause");
    return 0;
}  // end main


/***********************
 *   arithmic function
 ***********************/
void arithmetic(int inHeight, int inRadius, float* pVolume, float* pArea)
{
    *pArea = 2 * (PI) * (pow(inRadius,2.0));
    *pVolume = (PI) * (pow(inRadius,2.0)) * inHeight;

}
































