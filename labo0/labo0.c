// CPP program to convert string
// to char array
#include <bits/stdc++.h>
#include <string>
#include <map>
#include <vector>

using namespace std;

// driver code
int main(int argc, char **argv)
{
	// assigning value to string s
	string s = argv[1];

	int n = s.length();

	// declaring character array
	char char_array[n + 1];

	// copying the contents of the
	// string to char array
	strcpy(char_array, s.c_str());

	for (int i = 0; i < n; i++)
		cout << char_array[i];
	printf("\n");

   int mod = n%3, p = 0, r=0;
	 char char_array2[mod];
	 char triada = NULL, aux;
	 while (r < mod){
		 int k=0;
		 for (int j=0; j < 3; j++) //Se realizará 18 veces
			 aux = char_array[j];
			 triada = triada + aux;
		 }
			 char_array2[p] = triada;

			 r++;
			 p++;
   }

   void


		//El módulo lo puedo ir aumentando de 1 a 6.
	 if (j=3)





   return 0;
}








	return 0;
}
