#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <cstdlib>
#include <iostream>

using namespace std;

#define MAX_SIZE 1000

main()
   {
    ofstream fout;
    int i;
    int number_of_points;
    long random_num;

    cout << "how many number to sort?";
    scanf("%d",&number_of_points);
    fout.open("data.txt");
    fout << number_of_points << endl;
    
    for(i=0;i<number_of_points;i++)
        {
         random_num = rand() % 10000;
         fout << random_num << endl;
        }


   }
