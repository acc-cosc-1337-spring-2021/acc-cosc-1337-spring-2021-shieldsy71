#include "dna.h"
#include<string>
#include<iostream>
using std::string;

/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string& dna)
{
    double gc_content = 0;
    for(int i = 0; i < dna.size(); i++)
    {
        if (dna[i] == 'G' || dna[i]=='C')
        {
            gc_content++;
        }
    }

    double percent = gc_content / dna.size();
    return percent;

}


/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

string get_reverse_string(string dna)
{
    string reverse_string;
  
    for (int i = dna.length() -1; i >= 0; i--)
    {
        reverse_string.push_back(dna[i]);
    }

    return reverse_string;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

string get_dna_complement(string dna)
{
    string dna_complement = get_reverse_string(dna);
    string reverse_dna_compliment;

     for(int i = 0; i < dna_complement.size(); i++)
    {
        if (dna[i] == 'G')
        {
            dna_complement[i] = 'C';
        }

        else if (dna[i] == 'C')
        {
            dna_complement[i] = 'G';
        }
        else if (dna[i] == 'A')
        {
            dna_complement[i] = 'T';
        }
        else if (dna[i] == 'T')
        {
            dna_complement[i] = 'A';
        }

    reverse_dna_compliment = get_reverse_string(dna_complement);

    }
  return reverse_dna_compliment;
}

