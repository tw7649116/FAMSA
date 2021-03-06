/*
This file is a part of FAMSA software distributed under GNU GPL 3 licence.
The homepage of the FAMSA project is http://sun.aei.polsl.pl/REFRESH/famsa

Authors: Sebastian Deorowicz, Agnieszka Debudaj-Grabysz, Adam Gudys

Version: 1.1
Date   : 2016-06-29
*/

#ifndef _OUTPUT_FILE_H
#define _OUTPUT_FILE_H

#include "../core/sequence.h"

#include <string>
#include <vector>

using namespace std;

class COutputFile 
{
	vector<CGappedSequence*> sequences;
    
public:
	COutputFile();
	~COutputFile();

	bool SaveFile(string file_name);

	void PutSequences(vector<CGappedSequence*> &_sequences);
	void PutSequences(vector<CGappedSequence*> && _sequences);
};

#endif