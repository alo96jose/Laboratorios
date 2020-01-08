// CPP program to convert string
// to char array
#include <bits/stdc++.h>

using namespace std;

// driver code
int main(int argc, char **argv)
{
	// assigning value to string s
	string s = argv[1];

	int n = s.length();
//declaring array
char char_array[n + 1];
char char_array2[n%3];
	// copying the contents of the
	// string to char array
	strcpy(char_array, s.c_str());

	//for (int i = 0; i < n; i++)
	//	cout << char_array[i];
	// printf("\n");
  check(0, n);

    return 0;
 }

void check(int c, int n, char *){
  while (c<n){

    //SI EMPEZARA CON G
    if (char_array[c] == "G" || char_array[c+1] == "G")
        if (char_array[c+2] == "U" || char_array[c+2] == "C" || char_array[c+2] == "A" || char_array[c+2] == "G")
            //char_array2[c] = "G";
            string s1 = "G";
            strcpy(char_array2[c], s1.c_str());
            check(c+3);

    else if (char_array[c] == "G" || char_array[c+1] == "A"){
        if (char_array[c+2] == "U" || char_array[c+2] == "C"){
            char_array2[c] = "D";
            check(c+3);}

        else if (char_array[c+2] == "A" || char_array[c+2] == "G")
            char_array2[c] = "E";
            check(c+3);
        else
            break;}

    else if (char_array[c] == "G" || char_array[c+1] == "C"){
        if (char_array[c+2] == "U" || char_array[c+2] == "C" || char_array[c+2] == "A" || char_array[c+2] == "G")
            char_array2[c] = "A";
            check(c+3);}

    else if (char_array[c] == "G" || char_array[c+1] == "U"){
                if (char_array[c+2] == "U" || char_array[c+2] == "C" || char_array[c+2] == "A" || char_array[c+2] == "G")
                    char_array2[c] = "V";
                    check(c+3);}

    /* SI EMPEZARA CON U
    else if (char_array[c] == "U" || char_array[c+1] == "G"){
        if (char_array[c+2] == "G"){
            char_array2[c] = "W";
            check(c+3);}
        else if (char_array[c+2] == "A"){
                check(c+3);}

        else if (char_array[c] == "U" || char_array[c+1] == "G"){
            if (char_array[c+2] == "U" || char_array[c+2] == "C"){
                char_array2[c] = "C";
                check(c+3);}}

        else if (char_array[c] == "U" || char_array[c+1] == "A"){
            if (char_array[c+2] == "A" || char_array[c+2] == "G"){
                check(c+3);}

        else if (char_array[c] == "U" || char_array[c+1] == "A"){
            if (char_array[c+2] == "U" || char_array[c+2] == "C"){
                char_array2[c] = "Y";
                check(c+3);}}

        else if (char_array[c] == "U" || char_array[c+1] == "C"){
            if (char_array[c+2] == "U" || char_array[c+2] == "C" || char_array[c+2] == "A" || char_array[c+2] == "G")
              char_array2[c] = "S";
              check(c+3);}

        else if (char_array[c] == "U" || char_array[c+1] == "U"){
            if (char_array[c+2] == "A" || char_array[c+2] == "G"){
              char_array2[c] = "V";
              check(c+3);}

            else if (char_array[c+2] == "U" || char_array[c+2] == "C"){
                char_array2[c] = "F";
                check(c+3);}
            }

    //SI EMPEZARA CON A
    else if (char_array[c] == "A" || char_array[c+1] == "A"){
        if (char_array[c+2] == "G" || char_array[c+1] == "A"){
            char_array2[c] = "K";
            check(c+3);}

        else if (char_array[c+2] == "C") || char_array[c+1] == "U"){
                char_array2[c] = "N";
                check(c+3);}

    else if (char_array[c] == "A" || char_array[c+1] == "G"){
       if (char_array[c+2] == "G" || char_array[c+1] == "A"){
                char_array2[c] = "R";
                check(c+3);}

       else if (char_array[c+2] == "C") || char_array[c+1] == "U"){
                char_array2[c] = "S";
                check(c+3);}

    else if (char_array[c] == "A" || char_array[c+1] == "C"){
        if (char_array[c+2] == "U" || char_array[c+2] == "C" || char_array[c+2] == "G" || char_array[c+2] == "A"){
                char_array2[c] = "T";
                check(c+3);}}

    else if (char_array[c] == "A" || char_array[c+1] == "U"){
        if (char_array[c+2] == "G"){
                char_array2[c] = "M";
                check(c+3);}

        else if (char_array[c+2] == "A" || char_array[c+2] == "C" || char_array[c+2] == "U"){
                char_array2[c] = "I";
                check(c+3);}}

    //SI EMPEZARA CON C
    else if (char_array[c] == "C" || char_array[c+1] == "C"){
        if (char_array[c+2] == "G" || char_array[c+1] == "A" || char_array[c+2] == "C" || char_array[c+1] == "U"){
            char_array2[c] = "P";
            check(c+3);}}

    else if (char_array[c] == "C" || char_array[c+1] == "G"){
       if (char_array[c+2] == "G" || char_array[c+1] == "A" || char_array[c+2] == "C" || char_array[c+1] == "U"){
                char_array2[c] = "R";
                check(c+3);}}

    else if (char_array[c] == "C" || char_array[c+1] == "A"){
        if (char_array[c+2] == "G" || char_array[c+2] == "A"){
                char_array2[c] = "Q";
                check(c+3);}
        else if (char_array[c+2] == "C" || char_array[c+2] == "U"){
                char_array2[c] = "H";
                check(c+3);}}

    else if (char_array[c] == "C" || char_array[c+1] == "U"){
        if (char_array[c+2] == "G" || char_array[c+1] == "A" || char_array[c+2] == "C" || char_array[c+1] == "U"){
                char_array2[c] = "L";
                check(c+3);}}
      }
      */

      for (int i = 0; i < n; i++)
        cout << char_array2[i];
      printf("\n");
  }
